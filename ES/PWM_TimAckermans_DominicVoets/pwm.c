/*  chardev.c: Creates a read-only char device that says how many times
 *  you've read from the dev file
 *
 *  Copyright (C) 2001 by Peter Jay Salzman
 *	Modified for pwm assignment
 *
 *  08/02/2006 - Updated by Rodrigo Rubira Branco <rodrigo@kernelhacking.com>
 */
#include <linux/kernel.h>    /* We're doing kernel work */
#include <linux/module.h>    /* Specifically, a module */
#include <linux/kobject.h>   /* Necessary because we use sysfs */
#include <linux/device.h>
#include <linux/fs.h>
#include <linux/io.h>
#include <asm/uaccess.h>  /* for put_user */
#include <asm/errno.h>
//#include <mach/hardware.h>

/* Defines */ 
#define SUCCESS 0
#define DEVICE_NAME "pwm" /* Dev name as it appears in /proc/devices   */
#define BUF_LEN 80        /* Max length of the message from the device */

/* Minor numbers */
#define PWM1_ENABLE 0
#define PWM1_FREQ 1
#define PWM1_DUTY 2
#define PWM2_ENABLE 3
#define PWM2_FREQ 4
#define PWM2_DUTY 5

/* Global variables */
static int Device_Open = 0;  /* Is device open?  Used to prevent multiple access to the device */
char pwm1Enable[BUF_LEN];
char pwm1Freq[BUF_LEN];
char pwm1Duty[BUF_LEN];
char pwm2Enable[BUF_LEN];
char pwm2Freq[BUF_LEN];
char pwm2Duty[BUF_LEN];

/* The msg the device will give when asked    */
static char *msg_Ptr;

int minorNr = 0;

/* Called when a process tries to open the device file, like
 * "cat /dev/mycharfile"
 */
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

	return SUCCESS;
}


/* Called when a process closes the device file */
static int device_release(struct inode *inode, struct file *fp)
{
	Device_Open --;     /* We're now ready for our next caller */
	fp->private_data = NULL;
	return 0;
}

/* Called when a process, which already opened the dev file, attempts to
	read from it.
*/
static ssize_t device_read(struct file *fp,
	char *buffer,    /* The buffer to fill with data */
	size_t length,   /* The length of the buffer     */
	loff_t *offset)  /* Our offset in the file       */
{
	/* Number of bytes actually written to the buffer */
	int bytes_read = 0;

	/* If we're at the end of the message, return 0 signifying end of file */
	if (*msg_Ptr == 0) return 0;

	/* Actually put the data into the buffer */
	while (length && *msg_Ptr)  
	{
			put_user(*(msg_Ptr++), buffer++);

			length--;
			bytes_read++;
	}

	/* Most read functions return the number of bytes put into the buffer */
	return bytes_read;
}


/*  Called when a process writes to dev file: echo "hi" > /dev/hello */
static ssize_t device_write(struct file *fp,
	const char *buffer,
	size_t length,
	loff_t *off)
{
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

	int i;
	for (i = 0; i < length && i < BUF_LEN; i++)
	{
		get_user(msg_Ptr[i], buffer + i);
	}
	
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