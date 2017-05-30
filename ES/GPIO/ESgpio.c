#include "ESgpio.h"

static char sysfs_buffer[sysfs_max_data_size+1] = ""; /* an extra byte for the '\0' terminator */
static ssize_t used_buffer_size = 0;

int deviceOpen = 0;
char msg[BUF_LEN];
char *msg_Ptr;

char permbuf[256];
int errPerm;

/* Called when a process tries to open the device file, like */
static int device_open(struct inode *inode, struct file *fp)
{
    if (deviceOpen) return -EBUSY;
    deviceOpen++;

    msg_Ptr = msg;
    fp->private_data = (void*)MINOR(inode->i_rdev);

    return 0;
}


/* Called when a process closes the device file */
static int device_release(struct inode *inode, struct file *fp)
{
    deviceOpen --;
    return 0;
}

/* Called when a process, which already opened, attempts to read. */
static ssize_t device_read(struct file *fp,
    char *buffer,    /* The buffer to fill with data */
    size_t length,   /* The length of the buffer     */
    loff_t *offset)  /* Our offset in the file       */
{
    int bytes_read = 0;
    int minor = -1;
    int connector = -1;
    int pin = -1;
    Pinfo pinInfo;

    minor = (int)fp->private_data;

    pin = minor % 100;
    connector = (minor - pin) / 100;
    
    if (connector == 1)
    {
        pinInfo = checkConnectorJ1(pin);
    }
    else if (connector == 2)
    {
        pinInfo = checkConnectorJ2(pin);
    }
    else if(connector == 0)  /* Could not register minor number above 255 therefor 0-99 represents J3*/
    {
        connector = 3;
        pinInfo = checkConnectorJ3(pin);
    }
    else
    {
        printk(KERN_INFO "That device is invalid\n");
    }

    sprintf(msg_Ptr, "%i", ioread32(io_p2v(pinInfo.in_state)));

    if (msg_Ptr == 0) return 0;
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
    const char *buffer, /* The buffer to read the data from */
    size_t length,      /* The length of the buffer     */
    loff_t *offset)     /* Our offset in the file       */
{
    int i;  
    int minor = -1;
    int connector = -1;
    int pin = -1;
    Pinfo pinInfo;

    minor = (int)fp->private_data;

    pin = minor % 100;
    connector = (minor - pin) / 100;
    
    if (connector == 1)
    {
        pinInfo = checkConnectorJ1(pin);
    }
    else if (connector == 2)
    {
        pinInfo = checkConnectorJ2(pin);
    }
    else if(connector == 0)  /* Could not register minor number above 255 therefor 0-99 represents J3*/
    {
        connector = 3;
        pinInfo = checkConnectorJ3(pin);
    }
    else
    {
        printk(KERN_INFO "That device is invalid\n");
    }

    for (i = 0; i < length && i < BUF_LEN; i++)
    {
        get_user(msg_Ptr[i], buffer + i);
    }

    printk("%s", msg_Ptr);

    if(msg_Ptr[0] == '0')
    {
        printk("set low");
        iowrite32(0x1 << pinInfo.bitNr, io_p2v(pinInfo.out_clr));
    }
    else if(msg_Ptr[0] == '1')
    {
        printk("set high");
        iowrite32(0x1 << pinInfo.bitNr, io_p2v(pinInfo.out_set));
    }

    return i;
}

static ssize_t
sysfs_show(struct device *dev,
           struct device_attribute *attr,
           char *buffer)
{
    printk(KERN_INFO "sysfile_read (/sys/kernel/%s/%s) called\n", sysfs_dir, sysfs_file);
    return sprintf(buffer, "%s", sysfs_buffer);
}

static ssize_t
sysfs_store(struct device *dev,
            struct device_attribute *attr,
            const char *buffer,
            size_t count)
{
	Pinfo pinInfo;
	int err;
    char connector[10];
    int pin = -1;
    int IO = -1;

    used_buffer_size = count > sysfs_max_data_size ? sysfs_max_data_size : count; /* handle MIN(used_buffer_size, count) bytes */
    printk(KERN_INFO "sysfile_write (/sys/kernel/%s/%s) called\nbuffer: %s\n", sysfs_dir, sysfs_file, buffer);

    err = sscanf(buffer, "%s %i %i", connector, &pin, &IO);
    if(err < 0 || pin == -1 || (IO != 0 && IO != 1))
    {
    	printk(KERN_INFO "Invalid input. Please use \"<connector> <pin nummer> <0/1>\" eg \"J1 15 1\"\n");
    	return used_buffer_size;
    }

    if (connector[1] == '1')
    {
    	pinInfo = checkConnectorJ1(pin);
    }
    else if (connector[1] == '2')
    {
    	pinInfo = checkConnectorJ2(pin);
    }
    else if (connector[1] == '3')
    {
    	pinInfo = checkConnectorJ3(pin);
    }
    else
    {
    	printk(KERN_INFO "Invalid connector\n");
    	return used_buffer_size;
    }

    if(pinInfo.bitNr == -1 || pinInfo.in_state == 0x0)
    {
    	printk(KERN_INFO "The requested pin is not GPIO\n");
    	return used_buffer_size;
    }

    if (IO == 0) // configure as output
    {
    	iowrite32(0x1 << pinInfo.bitNr, io_p2v(pinInfo.dir_set));
        printk(KERN_INFO "Configured J%c_%i as output\n", connector[1], pin);
        printk(KERN_INFO "Use \"echo 0/1 > /dev/J%c_%i\" to write the pin\n", connector[1], pin);
    }
    else if (IO == 1) // configure as input
    {
    	iowrite32(0x1 << pinInfo.bitNr, io_p2v(pinInfo.dir_clr));
        printk(KERN_INFO "Configured J%c_%i as input\n", connector[1], pin);
        printk(KERN_INFO "Use \"cat /dev/J%c_%i\" to read the pin\n", connector[1], pin);
    }

    memcpy(sysfs_buffer, buffer, used_buffer_size);
    sysfs_buffer[used_buffer_size] = '\0'; /* The buffer is declared to be sysfs_max_data_size+1 bytes! */

    return used_buffer_size;
}

static DEVICE_ATTR(FILE_NAME, S_IWUGO | S_IRUGO, sysfs_show, sysfs_store);

static struct attribute *attrs[] = {
    &dev_attr_FILE_NAME.attr,
    NULL   /* need to NULL terminate the list of attributes */
};
static struct attribute_group attr_group = {
    .attrs = attrs,
};
static struct kobject *gpio_obj = NULL;

static struct file_operations Fops = {
    .read = device_read,
    .write = device_write,
    .open = device_open,
    .release = device_release,
};

int __init sysfs_init(void)
{
    int result = 0;

    gpio_obj = kobject_create_and_add(sysfs_dir, kernel_kobj);
    if (gpio_obj == NULL)
    {
        printk (KERN_INFO "%s module failed to load: kobject_create_and_add failed\n", sysfs_file);
        return -ENOMEM;
    }

    result = sysfs_create_group(gpio_obj, &attr_group);
    if (result != 0)
    {
        /* creating files failed, thus we must remove the created directory! */
        printk (KERN_INFO "%s module failed to load: sysfs_create_group failed with result %d\n", sysfs_file, result);
        kobject_put(gpio_obj);
        return -ENOMEM;
    }

    result = register_chrdev(MAYOR, DEVICE_NAME, &Fops);
    if(result < 0)
    {
        printk("Error registering device");
        return result;
    }

    printk(KERN_INFO "/sys/kernel/%s/%s created\n", sysfs_dir, sysfs_file);
    printk(KERN_INFO "example to configure J2_24 as output: \"echo \"J2 24 0\" > sys/kernel/%s/%s\"\n", sysfs_dir, sysfs_file);

    //Enable all GPIO available
    iowrite32(P0_GPIO, io_p2v(P0_MUX_CLR));
    iowrite32(P2_GPIO, io_p2v(P2_MUX_SET));
    iowrite32(P3_GPIO, io_p2v(P2_MUX_CLR));

    return result;
}

void __exit sysfs_exit(void)
{
    kobject_put(gpio_obj);
    printk (KERN_INFO "/sys/kernel/%s/%s removed\n", sysfs_dir, sysfs_file);

    unregister_chrdev(MAYOR, DEVICE_NAME);

    //Disable all GPIO available
    iowrite32(P0_GPIO, io_p2v(P0_MUX_SET));
    iowrite32(P2_GPIO, io_p2v(P2_MUX_CLR));
    iowrite32(P3_GPIO, io_p2v(P2_MUX_SET));
}

module_init(sysfs_init);
module_exit(sysfs_exit);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Tim en Dominic ");
MODULE_DESCRIPTION("GPIO");