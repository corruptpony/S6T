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
#include <asm/io.h>
#include <mach/hardware.h>

/* Defines */ 

//#define mappedValue 0x00007D00

#define PWM_CLOCK_SIGN 0x400040B8 
#define CLOCK_ENABLE_BIT 0x0000011F
#define LCD_BIT 0x40004054
#define LCD_DISABLE_BIT 0x00000000

#define PWM_ENABLE_BIT 0x80000000
#define PWM_DUTY_CYCLE_BITS 0x000000FF
#define PWM_FREQUENCY_BITS 0x0000FF00
#define PWM_DUTY_CYCLE_END_POSITION 8

#define PWM_1_CTRL 0x4005C000
#define PWM_2_CTRL 0x4005C004

#define MIN_PWM_INPUT 0
#define MAX_PWM_INPUT 100
#define MIN_PWM_OUTPUT 255
#define MAX_PWM_OUTPUT 0

#define MIN_FREQ_INPUT 1
#define MAX_FREQ_INPUT 128
#define MIN_FREQ_OUTPUT 256
#define MAX_FREQ_OUTPUT 0

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
int Device_Open = 0;  /* Is device open?  Used to prevent multiple access to the device */
char pwm1Enable[BUF_LEN];
char pwm1Freq[BUF_LEN];
char pwm1Duty[BUF_LEN];
char pwm2Enable[BUF_LEN];
char pwm2Freq[BUF_LEN];
char pwm2Duty[BUF_LEN];

/* The msg the device will give when asked    */
static char *msg_Ptr;

int minorNr = 0;

long map(long x, long in_min, long in_max, long out_min, long out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void pwm(void)
{
	uint32_t regValue;
    uint32_t PWM1_regValue;
    uint32_t offregValue;
    int mappedValue;
    int inputValue;
    uint32_t mask;

    //PWM1_enable:
    regValue = PWM1_regValue | PWM_ENABLE_BIT;
    iowrite32(regValue,io_p2v(PWM_1_CTRL));

    // PWM1_duty_cycle:
    offregValue = PWM1_regValue & ~(PWM_DUTY_CYCLE_BITS);
    mappedValue = map(inputValue, MIN_PWM_INPUT , MAX_PWM_INPUT , MIN_PWM_OUTPUT, MAX_PWM_OUTPUT);

    regValue = offregValue | (mappedValue);
    iowrite32(regValue, io_p2v(PWM_1_CTRL));   
    
    // PWM1_frequency:
    offregValue = PWM1_regValue & ~(PWM_FREQUENCY_BITS);
    
    mappedValue = map(inputValue, MIN_FREQ_INPUT, MAX_FREQ_INPUT, MIN_FREQ_OUTPUT, MAX_FREQ_OUTPUT);
    mask = mappedValue << PWM_DUTY_CYCLE_END_POSITION;
    regValue = offregValue | (mask);
    iowrite32(regValue, io_p2v(PWM_1_CTRL));   
}

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

	return 0;
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

	 //disable lcd
    iowrite32(LCD_DISABLE_BIT,io_p2v(LCD_BIT));
    //enable timer
    iowrite32(CLOCK_ENABLE_BIT,io_p2v(PWM_CLOCK_SIGN));
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