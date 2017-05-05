/*  chardev.c: Creates a read-only char device that says how many times
 *  you've read from the dev file
 *
 *  Copyright (C) 2001 by Peter Jay Salzman
 *	Modified for pwm assignment by Tim and Dominic
 *
 */
#include <linux/kernel.h> 
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/io.h>
#include <asm/uaccess.h>
#include <mach/hardware.h>

/* Defines */ 
#define PWM_CLOCK_SIGN 0x400040B8 
#define CLOCK_ENABLE_BIT 0x0000011F
#define LCD_BIT 0x40004054
#define LCD_DISABLE_BIT 0x00000000

#define PWM_ENABLE_BIT 0x80000000
#define PWM_DISABLE_BIT 0x00000000
#define PWM_DUTY_CYCLE_SHIFT 8

#define PWM_1_CTRL 0x4005C000
#define PWM_2_CTRL 0x4005C004

#define MIN_DUTY_INPUT 0
#define MAX_DUTY_INPUT 100
#define MIN_DUTY_OUTPUT 255
#define MAX_DUTY_OUTPUT 0

#define MIN_FREQ_INPUT 30
#define MAX_FREQ_INPUT 60
#define MIN_FREQ_OUTPUT 256
#define MAX_FREQ_OUTPUT 0

#define DEVICE_NAME "pwm"
#define BUF_LEN 80

/* Minor numbers */
#define PWM1_ENABLE 0
#define PWM1_FREQ 1
#define PWM1_DUTY 2
#define PWM2_ENABLE 3
#define PWM2_FREQ 4
#define PWM2_DUTY 5

/* Global variables */
int Device_Open = 0;  /* Is device open?  Used to prevent multiple access to the device */
char pwm1Enable[BUF_LEN];
char pwm1Freq[BUF_LEN];
char pwm1Duty[BUF_LEN];
char pwm2Enable[BUF_LEN];
char pwm2Freq[BUF_LEN];
char pwm2Duty[BUF_LEN];
char *msg_Ptr;
int minorNr = 0;

// Convert the number in a char[] to an integer and capping it's value to be within usuable range
int convert(char value[], int minValue, int maxValue)
{
	char *dataPntr;
	int valInt;
	dataPntr = (char*)&value;
    valInt = simple_strtol(value,&dataPntr,10);
    if(valInt < minValue)
    	valInt = minValue;
   	else if(valInt > maxValue)
   		valInt = maxValue;
   	return valInt;
}

// Map the input ranging between in_min and in_max to an output ranging between out_min and out_max
uint32_t map(int x, int in_min, int in_max, int out_min, int out_max)
{
    return (uint32_t)((x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min);
}

// Make value for PWM register based on the user input
uint32_t pwm(char enable[], char freq[], char duty[])
{
    uint32_t RegValue;
    uint32_t mappedValue;
    int valInt;

    //PWM Enable:
    if(enable[0] == '1')
    {
    	RegValue = PWM_ENABLE_BIT;
    }
    else
    {
    	RegValue = PWM_DISABLE_BIT;
    }

    // PWM Duty Cycle:
    valInt = convert(duty, MIN_DUTY_INPUT, MAX_DUTY_INPUT);
    mappedValue = map(valInt, MIN_DUTY_INPUT , MAX_DUTY_INPUT , MIN_DUTY_OUTPUT, MAX_DUTY_OUTPUT);
    RegValue = RegValue | mappedValue;

    // PWM Frequency:
    valInt = convert(freq, MIN_FREQ_INPUT, MAX_FREQ_INPUT);
    mappedValue = map(valInt, MIN_FREQ_INPUT , MAX_FREQ_INPUT , MIN_FREQ_OUTPUT, MAX_FREQ_OUTPUT);
    mappedValue = mappedValue << PWM_DUTY_CYCLE_SHIFT;
    RegValue = RegValue | mappedValue;

    // Return value to write in the register
    return RegValue;
}

/* Called when a process tries to open the device file, like */
static int device_open(struct inode *inode, struct file *fp)
{
	if (Device_Open) return -EBUSY;

	Device_Open++;

	minorNr = MINOR(inode->i_rdev);
	fp->private_data = &minorNr;

	if(fp->private_data != NULL)
	{
		minorNr = *(unsigned int*)fp->private_data;
		switch(minorNr)
		{
			case PWM1_ENABLE:
			msg_Ptr = pwm1Enable;
				break;
			case PWM1_FREQ:
			msg_Ptr = pwm1Freq;
				break;
			case PWM1_DUTY:
			msg_Ptr = pwm1Duty;
				break;
			case PWM2_ENABLE:
			msg_Ptr = pwm2Enable;
				break;
			case PWM2_FREQ:
			msg_Ptr = pwm2Freq;
				break;
			case PWM2_DUTY:
			msg_Ptr = pwm2Duty;
				break;
		}
	}

	return 0;
}


/* Called when a process closes the device file */
static int device_release(struct inode *inode, struct file *fp)
{
	Device_Open --;
	fp->private_data = NULL;
	return 0;
}

/* Called when a process, which already opened, attempts to read.
*/
static ssize_t device_read(struct file *fp,
	char *buffer,    /* The buffer to fill with data */
	size_t length,   /* The length of the buffer     */
	loff_t *offset)  /* Our offset in the file       */
{
	int bytes_read = 0;

	if (*msg_Ptr == 0) return 0;

	while (length && *msg_Ptr)  
	{
			put_user(*(msg_Ptr++), buffer++);

			length--;
			bytes_read++;
	}

	return bytes_read;
}

/* Called when a process, which is already opened, attemps to write. */
static ssize_t device_write(struct file *fp,
	const char *buffer,
	size_t length,
	loff_t *off)
{
	int i;

	if(fp->private_data != NULL)
	{
		minorNr = *(unsigned int*)fp->private_data;
		switch(minorNr)
		{
			case PWM1_ENABLE:
			msg_Ptr = pwm1Enable;
				break;
			case PWM1_FREQ:
			msg_Ptr = pwm1Freq;
				break;
			case PWM1_DUTY:
			msg_Ptr = pwm1Duty;
				break;
			case PWM2_ENABLE:
			msg_Ptr = pwm2Enable;
				break;
			case PWM2_FREQ:
			msg_Ptr = pwm2Freq;
				break;
			case PWM2_DUTY:
			msg_Ptr = pwm2Duty;
				break;
		}
	}
	
	for (i = 0; i < length && i < BUF_LEN; i++)
	{
		get_user(msg_Ptr[i], buffer + i);
	}
	
	
	iowrite32(pwm(pwm1Enable, pwm1Freq, pwm1Duty), io_p2v(PWM_1_CTRL));
	iowrite32(pwm(pwm2Enable, pwm2Freq, pwm2Duty), io_p2v(PWM_2_CTRL));

	return i;
}

static struct file_operations Fops = {
	.read = device_read,
	.write = device_write,
	.open = device_open,
	.release = device_release,
};

int __init sysfs_init(void)
{
	int rtnval = 0;
	int result = 0;

	rtnval = register_chrdev(99, DEVICE_NAME, &Fops);
	if(rtnval < 0)
	{
		printk("Error registering device");
		return rtnval;
	}

	//disable lcd
    iowrite32(LCD_DISABLE_BIT,io_p2v(LCD_BIT));
    //enable timer
    iowrite32(CLOCK_ENABLE_BIT,io_p2v(PWM_CLOCK_SIGN));

	 return result;
}

void __exit sysfs_exit(void)
{
	unregister_chrdev(99, DEVICE_NAME);
}

module_init(sysfs_init);
module_exit(sysfs_exit);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Tim en Dominic ");
MODULE_DESCRIPTION("pwm");