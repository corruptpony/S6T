/*
 * sysfs2.c - create a "subdir" with a "file" in /sys
 * modified for peek and poke assignment
 */
#include <linux/kernel.h>    /* We're doing kernel work */
#include <linux/module.h>    /* Specifically, a module */
#include <linux/kobject.h>   /* Necessary because we use sysfs */
#include <linux/device.h>
#include <linux/fs.h>
#include <linux/io.h>
#include <mach/hardware.h>

#define sysfs_dir  "ES6"
#define sysfs_file "hw"
#define FILE_NAME hw

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
    used_buffer_size = count > sysfs_max_data_size ? sysfs_max_data_size : count; /* handle MIN(used_buffer_size, count) bytes */
    printk(KERN_INFO "sysfile_write (/sys/kernel/%s/%s) called\nbuffer: %s\n", sysfs_dir, sysfs_file, buffer);

    memcpy(sysfs_buffer, buffer, used_buffer_size);
    sysfs_buffer[used_buffer_size] = '\0'; /* this is correct, the buffer is declared to be sysfs_max_data_size+1 bytes! */

    return used_buffer_size;
}

static ssize_t device_read();
static ssize_t device_write();
static ssize_t device_open();
static ssize_t device_release();

static DEVICE_ATTR(FILE_NAME, S_IWUGO | S_IRUGO, sysfs_show, sysfs_store);

static struct attribute *attrs[] = {
    &dev_attr_FILE_NAME.attr,
    NULL   /* need to NULL terminate the list of attributes */
};
static struct attribute_group attr_group = {
    .attrs = attrs,
};
static struct kobject *pwm_obj = NULL;

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

	rtnval = register_chrdev(99, "/dev/pwm1_enable", &Fops);
	if(rtnval < 0)
	{
		return rtnval;
	}

    pwm_obj = kobject_create_and_add(sysfs_dir, kernel_kobj);
    if (pwm_obj == NULL)
    {
        printk (KERN_INFO "%s module failed to load: kobject_create_and_add failed\n", sysfs_file);
        return -ENOMEM;
    }

    result = sysfs_create_group(pwm_obj, &attr_group);
    if (result != 0)
    {
        /* creating files failed, thus we must remove the created directory! */
        printk (KERN_INFO "%s module failed to load: sysfs_create_group failed with result %d\n", sysfs_file, result);
        kobject_put(pwm_obj);
        return -ENOMEM;
    }

    printk(KERN_INFO "/sys/kernel/%s/%s created\n", sysfs_dir, sysfs_file);
    return result;
}

void __exit sysfs_exit(void)
{
    kobject_put(pwm_obj);
    printk (KERN_INFO "/sys/kernel/%s/%s removed\n", sysfs_dir, sysfs_file);
}

module_init(sysfs_init);
module_exit(sysfs_exit);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Tim en Dominic ");
MODULE_DESCRIPTION("pwm");