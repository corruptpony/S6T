#ifndef ESGPIO_H
#define ESGPIO_H

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/kobject.h>
#include <linux/device.h>
#include <asm/uaccess.h>
#include <linux/io.h>
#include <mach/hardware.h>

#define LCD_DISABLE_BIT 0x00000000
#define LCD_REG 0x40004054

#define P0_MUX_SET 0x40028120
#define P0_MUX_CLR 0x40028124
#define P0_GPIO 0xFF

#define P2_MUX_SET 0x40028028
#define P2_MUX_CLR 0x4002802C
#define P2_GPIO 0x8

#define P3_MUX_SET 0x40028110
#define P3_MUX_CLR 0x40028114
#define P3_GPIO 0x33

#define P0_IN_STATE 0x40028040
#define P0_OUT_SET 0x40028044
#define P0_OUT_CLR 0x40028048
#define P0_DIR_SET 0x40028050
#define P0_DIR_CLR 0x40028054
#define P0_DIR_STATE 0x40028058

#define P2_IN_STATE 0x4002801C
#define P2_OUT_SET 0x40028020
#define P2_OUT_CLR 0x40028024
#define P2_DIR_SET 0x40028010
#define P2_DIR_CLR 0x40028014
#define P2_DIR_STATE 0x40028018

#define P3_IN_STATE 0x40028000
#define P3_OUT_SET 0x40028004
#define P3_OUT_CLR 0x40028008

#define sysfs_dir  "gpio"
#define sysfs_file "config"
#define FILE_NAME config

#define DEVICE_NAME "gpio"
#define BUF_LEN 80
#define MAJORNR 65

#define sysfs_max_data_size 1024

typedef struct Pinfo {
   int bitNr;
   uint32_t in_state;
   uint32_t out_set;
   uint32_t out_clr;
   uint32_t dir_set;
   uint32_t dir_clr;
   uint32_t dir_state;
} Pinfo;

void fillRegs(Pinfo* p)
{
	if(p->in_state == P0_IN_STATE)
	{
		p->out_set = P0_OUT_SET;
		p->out_clr = P0_OUT_CLR;
		p->dir_set = P0_DIR_SET;
		p->dir_clr = P0_DIR_CLR;
		p->dir_state = P0_DIR_STATE;
	}
	else if (p->in_state == P2_IN_STATE)
	{
		p->out_set = P2_OUT_SET;
		p->out_clr = P2_OUT_CLR;
		p->dir_set = P2_DIR_SET;
		p->dir_clr = P2_DIR_CLR;
		p->dir_state = P2_DIR_STATE;
	}
	else if (p->in_state == P3_IN_STATE)
	{
		p->out_set = P3_OUT_SET;
		p->out_clr = P3_OUT_CLR;
		p->dir_set = P2_DIR_SET;
		p->dir_clr = P2_DIR_CLR;
		p->dir_state = P2_DIR_STATE;
	}
}

Pinfo checkConnectorJ1(int pinNumber)
{
	Pinfo p = {-1, 0x0};
	
	switch(pinNumber)
	{
		case 27:
			p.bitNr = 7;
			p.in_state = P0_IN_STATE;
			break;
		case 49:
			p.bitNr = 8;
			p.in_state = P2_IN_STATE;
			break;
		case 50:
			p.bitNr = 9;
			p.in_state = P2_IN_STATE;
			break;
		case 51:
			p.bitNr = 10;
			p.in_state = P2_IN_STATE;
			break;
		case 52:
			p.bitNr = 11;
			p.in_state = P2_IN_STATE;
			break;
		case 53:
			p.bitNr = 12;
			p.in_state = P2_IN_STATE;
			break;
		case 24:
			p.bitNr = 24;
			p.in_state = P3_IN_STATE;
			break;

	}

	fillRegs(&p);
	return p;
}

Pinfo checkConnectorJ2(int pinNumber)
{
	Pinfo p = {-1, 0x0};	
	switch(pinNumber)
	{
		case 11:
			p.bitNr = 2;
			p.in_state = P0_IN_STATE;
			break;
		case 12:
			p.bitNr = 3;
			p.in_state = P0_IN_STATE;
			break;
		case 13:
			p.bitNr = 4;
			p.in_state = P0_IN_STATE;
			break;
		case 14:
			p.bitNr = 4;
			p.in_state = P0_IN_STATE;
			break;
		case 24:
			p.bitNr = 1;
			p.in_state = P0_IN_STATE;
			break;
	}

	fillRegs(&p);
	return p;
}

Pinfo checkConnectorJ3(int pinNumber)
{	
	Pinfo p = {-1, 0x0};
	
	switch(pinNumber)
	{
		case 40:
			p.bitNr = 0;
			p.in_state = P0_IN_STATE;
			break;
		case 33:
			p.bitNr = 6;
			p.in_state = P0_IN_STATE;
			break;
		case 47:
			p.bitNr = 0;
			p.in_state = P2_IN_STATE;
			break;
		case 56:
			p.bitNr = 1;
			p.in_state = P2_IN_STATE;
			break;
		case 48:
			p.bitNr = 2;
			p.in_state = P2_IN_STATE;
			break;
		case 57:
			p.bitNr = 3;
			p.in_state = P2_IN_STATE;
			break;
		case 49:
			p.bitNr = 4;
			p.in_state = P2_IN_STATE;
			break;
		case 58:
			p.bitNr = 5;
			p.in_state = P2_IN_STATE;
			break;
		case 50:
			p.bitNr = 6;
			p.in_state = P2_IN_STATE;
			break;
		case 45:
			p.bitNr = 7;
			p.in_state = P2_IN_STATE;
			break;
		case 54:
			p.bitNr = 10;
			p.in_state = P3_IN_STATE;
			break;
		case 46:
			p.bitNr = 11;
			p.in_state = P3_IN_STATE;
			break;
		case 36:
			p.bitNr = 14;
			p.in_state = P3_IN_STATE;
			break;
	}
	fillRegs(&p);
	return p;
}

#endif