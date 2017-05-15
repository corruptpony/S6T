/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: CommonDefs
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/VirtualConfig/CommonDefs.h
*********************************************************************/

#ifndef CommonDefs_H
#define CommonDefs_H

//Motor defines
#define MOTOR_PERIOD	SYS "/class/pwm/pwm1/period"
#define MOTOR_DUTY	SYS "/class/pwm/pwm1/duty"
#define MOTOR_ACTIVE	SYS "/class/pwm/pwm1/active"
#define MOTOR_DIRECTION	SYS "/class/gpio/gpio19/level"

//Tacho defines
// returns number of rotations since last read
#define TACHO		SYS "/class/gpio_events/gpio_event91/event"

//Key defines
// returns number of key pressed events since last read
#define KEY1		SYS "/class/gpio_events/gpio_event14/event"
#define KEY2		SYS "/class/gpio_events/gpio_event86/event"
#define KEY3		SYS "/class/gpio_events/gpio_event87/event"

//Led defines
//Init  must be initialized before use !!!   example 
//	echo 58:out:lo > /sys/class/gpio/map_gpio
//
#define GPIO_MAP	SYS "/class/gpio/map_gpio"
#define ENABLE_LED1	"58:out:lo"
#define ENABLE_LED2	"59:out:lo"
#define ENABLE_LED3	"60:out:lo"
#define ENABLE_LED4	"65:out:lo"
#define ENABLE_LED5	"67:out:lo"
#define ENABLE_LED6	"68:out:lo"
#define ENABLE_LED7	"70:out:lo"
#define ENABLE_LED8	"73:out:lo"
//
#define LED1		SYS "/class/gpio/gpio58/level"
#define LED2		SYS "/class/gpio/gpio59/level"
#define LED3		SYS "/class/gpio/gpio60/level"
#define LED4		SYS "/class/gpio/gpio65/level"
#define LED5		SYS "/class/gpio/gpio67/level"
#define LED6		SYS "/class/gpio/gpio68/level"
#define LED7		SYS "/class/gpio/gpio70/level"
#define LED8		SYS "/class/gpio/gpio73/level"

#endif
/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/CommonDefs.h
*********************************************************************/
