#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include <linux/wait.h>
#include <linux/interrupt.h>
#include <mach/hardware.h>
#include <mach/platform.h>
#include <mach/irqs.h>

#define DEVICE_NAME 		"adc"
#define ADC_NAME            "adc"
#define BUTTON_NAME         "eint0"
#define MAJORNR             253
#define ADC_NUMCHANNELS		3


#define READ_REG(a)         (*(volatile unsigned int *)(a))
#define WRITE_REG(b,a)      (*(volatile unsigned int *)(a) = (b))

// adc registers
#define	ADCLK_CTRL			io_p2v(0x400040B4)
#define	ADCLK_CTRL1			io_p2v(0x40004060)
#define	ADC_SELECT			io_p2v(0x40048004)
#define	ADC_CTRL			io_p2v(0x40048008)
#define ADC_VALUE           io_p2v(0x40048048)
#define SIC2_ATR            io_p2v(0x40010010)

// Masks
#define RTC_CLK_ADC             ~0x01ff
#define ADC_CLR_REF             ~0x03c0
#define ADC_SET_REF             0x0280
#define ADC_START_MASK          BIT(2)
#define ADC_CONVERSIE_MASK      BIT(1)
#define ADC_VALUE_MASK          0x3FF
#define GPIO_EDGE_MASK          BIT(23)
#define HIGH_MASK               ~0x0
#define LOW_MASK                0x0


static unsigned char    adc_channel = 0;
static int              adc_values[ADC_NUMCHANNELS] = {0, 0, 0};


static irqreturn_t      adc_interrupt (int irq, void * dev_id);
static irqreturn_t      gp_interrupt (int irq, void * dev_id);

wait_queue_head_t event;
int conversionDone = 0;

void setNewRegValue(unsigned int* reg, unsigned long andVal, unsigned long orVal)
{
    unsigned long data;
    data = READ_REG(reg);
    if(andVal != HIGH_MASK) { data &= andVal; }
    if(orVal != LOW_MASK) { data |= orVal; }
    WRITE_REG(data, reg);
}

static void adc_init (void)
{
	// set 32 KHz RTC clock
    setNewRegValue(ADCLK_CTRL, HIGH_MASK, LPC32XX_CLKPWR_ADC32CLKCTRL_CLK_EN);

	// rtc clock ADC & Display = from PERIPH_CLK
    setNewRegValue(ADCLK_CTRL1, RTC_CLK_ADC, LOW_MASK);

	// negatief & positieve referentie
    setNewRegValue(ADC_SELECT, ADC_CLR_REF, ADC_SET_REF);

	// aanzetten adc en reset, bit 2 in ADC_CTRL
    setNewRegValue(ADC_CTRL, HIGH_MASK, ADC_START_MASK);

    // GPIO interrupt op edge detection zetten
    setNewRegValue(SIC2_ATR, HIGH_MASK, GPIO_EDGE_MASK);

    init_waitqueue_head(&event);

	//IRQ init
    if (request_irq (IRQ_LPC32XX_TS_IRQ, adc_interrupt, IRQF_DISABLED, ADC_NAME, NULL) != 0)
    {
        printk(KERN_ALERT "ADC IRQ request failed\n");
    }
    if (request_irq (IRQ_LPC32XX_GPI_01, gp_interrupt, IRQF_DISABLED, BUTTON_NAME, NULL) != 0)
    {
        printk (KERN_ALERT "GP IRQ request failed\n");
    }
}


static void adc_start (unsigned char channel)
{
	unsigned long data;

	if (channel >= ADC_NUMCHANNELS)
    {
        channel = 0;
    }

	data = READ_REG (ADC_SELECT);
	//selecteer het kanaal, eerst uitlezen, kanaalbits negeren en dan alleen de kanaalbits veranderen (0x0030)
	WRITE_REG((data & ~0x0030) | ((channel << 4) & 0x0030), ADC_SELECT);

	//nu ook globaal zetten zodat we de interrupt kunnen herkennen
	adc_channel = channel;

	// start conversie
    setNewRegValue(ADC_CTRL, HIGH_MASK, ADC_CONVERSIE_MASK);
}

static irqreturn_t adc_interrupt (int irq, void * dev_id)
{
    adc_values[adc_channel] = (READ_REG(ADC_VALUE) & ADC_VALUE_MASK);
    printk(KERN_WARNING "ADC(%d)=%d\n", adc_channel, adc_values[adc_channel]);

    conversionDone = 1;
    wake_up(&event);

    return (IRQ_HANDLED);
}

static irqreturn_t gp_interrupt(int irq, void * dev_id)
{
    adc_start (2);

    printk(KERN_INFO "EINT0 interrupt triggered");

    return (IRQ_HANDLED);
}


static void adc_exit (void)
{
    free_irq (IRQ_LPC32XX_TS_IRQ, NULL);
    free_irq (IRQ_LPC32XX_GPI_01, NULL);

    // unset 32 KHz RTC clock
    setNewRegValue(ADCLK_CTRL, ~LPC32XX_CLKPWR_ADC32CLKCTRL_CLK_EN, LOW_MASK);
}


static ssize_t device_read (struct file * file, char __user * buf, size_t length, loff_t * f_pos)
{
	int     channel = (int) file->private_data;
    int     bytes_read = 0;

    printk (KERN_WARNING DEVICE_NAME ":device_read(%d)\n", channel);

    if (channel < 0 || channel >= ADC_NUMCHANNELS)
    {
		return -EFAULT;
    }

    adc_start (channel);

    // Wait for interrupt to be done handling
    wait_event_interruptible(event, conversionDone == 1);
    conversionDone = 0;

    *buf = (READ_REG(ADC_VALUE) & ADC_VALUE_MASK);

    return (bytes_read);
}

static int device_open (struct inode * inode, struct file * file)
{
    file->private_data = (void*)MINOR(inode->i_rdev);

    try_module_get(THIS_MODULE);
    return 0;
}


static int device_release (struct inode * inode, struct file * file)
{
    printk (KERN_WARNING DEVICE_NAME ": device_release()\n");


    module_put(THIS_MODULE);
	return 0;
}


static struct file_operations fops =
{
    .owner = THIS_MODULE,
    .read = device_read,
    .open = device_open,
    .release = device_release
};


static struct chardev
{
    dev_t       dev;
    struct cdev cdev;
} adcdev;


int adcdev_init (void)
{
    // try to get a dynamically allocated major number
	int error = alloc_chrdev_region(&adcdev.dev, 0, ADC_NUMCHANNELS, DEVICE_NAME);

	if(error < 0)
	{
		// failed to get major number for our device.
		printk(KERN_WARNING DEVICE_NAME ": dynamic allocation of major number failed, error=%d\n", error);
		return error;
	}

	printk(KERN_INFO DEVICE_NAME ": major number=%d\n", MAJOR(adcdev.dev));

	cdev_init(&adcdev.cdev, &fops);
	adcdev.cdev.owner = THIS_MODULE;
	adcdev.cdev.ops = &fops;

	error = cdev_add(&adcdev.cdev, adcdev.dev, ADC_NUMCHANNELS);
	if(error < 0)
	{
		// failed to add our character device to the system
		printk(KERN_WARNING DEVICE_NAME ": unable to add device, error=%d\n", error);
		return error;
	}

	adc_init();

	return 0;
}


/*
 * Cleanup - unregister the appropriate file from /dev
 */
void cleanup_module()
{
	cdev_del(&adcdev.cdev);
	unregister_chrdev_region(adcdev.dev, ADC_NUMCHANNELS);

	adc_exit();
}


module_init(adcdev_init);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Joris Geurts, Tobias Neyssen & Leon Leijssen");
MODULE_DESCRIPTION("ADC Driver");

