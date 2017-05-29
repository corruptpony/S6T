#include "GPIO.h"

#define sysfs_max_data_size 1024 /* due to limitations of sysfs, you mustn't go above PAGE_SIZE, 1k is already a *lot* of information for sysfs! */
static char sysfs_buffer[sysfs_max_data_size+1] = ""; /* an extra byte for the '\0' terminator */
static ssize_t used_buffer_size = 0;

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

    Pinfo pinInfo;

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
    	printk(KERN_INFO "Invalid connector");
    	return used_buffer_size;
    }

    if(pinInfo.bitNr == -1 || reg || 0x0)
    {
    	printk(KERN_INFO "The requested pin is not GPIO");
    	return used_buffer_size;
    }

    if (IO == 0) // configure as output
    {
    	iowrite32(0x1 << bitNr, io_p2v(reg)); 
    }
    else if (IO == 1) // configure as input
    {
    	iowrite32(0x1 << bitNr, io_p2v(reg + 4)); // Shift 4 bytes for the clear register
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
static struct kobject *hello_obj = NULL;


int __init sysfs_init(void)
{
    int result = 0;

    hello_obj = kobject_create_and_add(sysfs_dir, kernel_kobj);
    if (hello_obj == NULL)
    {
        printk (KERN_INFO "%s module failed to load: kobject_create_and_add failed\n", sysfs_file);
        return -ENOMEM;
    }

    result = sysfs_create_group(hello_obj, &attr_group);
    if (result != 0)
    {
        /* creating files failed, thus we must remove the created directory! */
        printk (KERN_INFO "%s module failed to load: sysfs_create_group failed with result %d\n", sysfs_file, result);
        kobject_put(hello_obj);
        return -ENOMEM;
    }

    printk(KERN_INFO "/sys/kernel/%s/%s created\n", sysfs_dir, sysfs_file);

    //Enable all GPIO available
    iowrite32(P0_GPIO, P0_MUX_CLR);
    iowrite32(P1_GPIO, P1_MUX_SET);
    iowrite32(P2_GPIO, P2_MUX_SET);
    iowrite32(P3_GPIO, P2_MUX_CLR);

    return result;
}

void __exit sysfs_exit(void)
{
    kobject_put(hello_obj);
    printk (KERN_INFO "/sys/kernel/%s/%s removed\n", sysfs_dir, sysfs_file);

    //Enable all GPIO available
    iowrite32(P0_GPIO, P0_MUX_SET);
    iowrite32(P1_GPIO, P0_MUX_CLR);
    iowrite32(P2_GPIO, P2_MUX_CLR);
    iowrite32(P2_GPIO, P2_MUX_SET);
}

module_init(sysfs_init);
module_exit(sysfs_exit);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Tim en Dominic ");
MODULE_DESCRIPTION("read and write");