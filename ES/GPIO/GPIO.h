#ifndef GPIO_H
#define GPIO_H

#include <linux/kernel.h>    /* We're doing kernel work */
#include <linux/module.h>    /* Specifically, a module */
#include <linux/kobject.h>   /* Necessary because we use sysfs */
#include <linux/device.h>
#include <linux/io.h>
#include <mach/hardware.h>

#define sysfs_dir  "GPIO"
#define sysfs_file "config"
#define FILE_NAME config

#define P0_MUX_SET 0x40028120
#define P0_MUX_CLR 0x40028124
#define P0_GPIO 0xFF

#define P1_MUX_SET 0x40028130
#define P1_MUX_CLR 0x40028134
#define P1_GPIO 0xFFFFFF

#define P2_MUX_SET 0x40028028
#define P2_MUX_CLR 0x4002802C
#define P2_GPIO 0x8

#define P3_MUX_SET 0x40028110




#define P3_MUX_CLR 0x40028114

#define P0_REG 0x40028044
#define P1_REG 0x40028070
#define P2_REG 0x40028010
#define P3_REG 0x40028010

typedef struct Pinfo {
   int bitNr;
   uint32_t reg;
} Pinfo;

Pinfo checkConnectorJ1(int pinNumber);
Pinfo checkConnectorJ2(int pinNumber);
Pinfo checkConnectorJ3(int pinNumber);

#endif