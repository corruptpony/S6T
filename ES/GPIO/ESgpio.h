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
#define P3_GPIO 0x33

#define P0_REG 0x40028044
#define P1_REG 0x40028070
#define P2_REG 0x40028010
#define P3_REG 0x40028010

typedef struct Pinfo {
   int bitNr;
   uint32_t reg;
} Pinfo;

Pinfo checkConnectorJ1(int pinNumber)
{
	Pinfo p = {-1, 0x0};
	
	switch(pinNumber)
	{
		case 27:
			p.bitNr = 7;
			p.reg = P0_REG;
			break;
		case 49:
			p.bitNr = 8;
			p.reg = P2_REG;
			break;
		case 50:
			p.bitNr = 9;
			p.reg = P2_REG;
			break;
		case 51:
			p.bitNr = 10;
			p.reg = P2_REG;
			break;
		case 52:
			p.bitNr = 11;
			p.reg = P2_REG;
			break;
		case 53:
			p.bitNr = 12;
			p.reg = P2_REG;
			break;
		case 24:
			p.bitNr = 24;
			p.reg = P3_REG;
			break;

	}
	return p;
}

Pinfo checkConnectorJ2(int pinNumber)
{
	Pinfo p = {-1, 0x0};	
	switch(pinNumber)
	{
		case 11:
			p.bitNr = 2;
			p.reg = P0_REG;
			break;
		case 12:
			p.bitNr = 3;
			p.reg = P0_REG;
			break;
		case 13:
			p.bitNr = 4;
			p.reg = P0_REG;
			break;
		case 14:
			p.bitNr = 4;
			p.reg = P0_REG;
			break;
		case 24:
			p.bitNr = 1;
			p.reg = P0_REG;
			break;
	}
	return p;
}

Pinfo checkConnectorJ3(int pinNumber)
{	
	Pinfo p = {-1, 0x0};
	
	switch(pinNumber)
	{
		case 40:
			p.bitNr = 0;
			p.reg = P0_REG;
			break;
		case 33:
			p.bitNr = 6;
			p.reg = P0_REG;
			break;
		case 47:
			p.bitNr = 0;
			p.reg = P2_REG;
			break;
		case 56:
			p.bitNr = 1;
			p.reg = P2_REG;
			break;
		case 48:
			p.bitNr = 2;
			p.reg = P2_REG;
			break;
		case 57:
			p.bitNr = 3;
			p.reg = P2_REG;
			break;
		case 49:
			p.bitNr = 4;
			p.reg = P2_REG;
			break;
		case 58:
			p.bitNr = 5;
			p.reg = P2_REG;
			break;
		case 50:
			p.bitNr = 6;
			p.reg = P2_REG;
			break;
		case 45:
			p.bitNr = 7;
			p.reg = P2_REG;
			break;
		case 54:
			p.bitNr = 10;
			p.reg = P3_REG;
			break;
		case 46:
			p.bitNr = 11;
			p.reg = P3_REG;
			break;
		case 36:
			p.bitNr = 14;
			p.reg = P3_REG;
			break;
	}
	return p;
}

#endif