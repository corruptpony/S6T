/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: PhytecConfig
	Model Element	: DesignMotor
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/PhytecConfig/DesignMotor.cpp
*********************************************************************/

//## auto_generated
#include "DesignMotor.h"
//## auto_generated
#include "iMotor.h"
//## auto_generated
#include "Motor.h"
//## package DesignMotor



//## event evStartMotor()
evStartMotor::evStartMotor() {
    setId(evStartMotor_DesignMotor_id);
}

bool evStartMotor::isTypeOf(short id) const {
    if(evStartMotor_DesignMotor_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evStopMotor()
evStopMotor::evStopMotor() {
    setId(evStopMotor_DesignMotor_id);
}

bool evStopMotor::isTypeOf(short id) const {
    if(evStopMotor_DesignMotor_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evSetDirection(int)
evSetDirection::evSetDirection(int p_direction) {
    setId(evSetDirection_DesignMotor_id);
    direction = p_direction;
}

bool evSetDirection::isTypeOf(short id) const {
    if(evSetDirection_DesignMotor_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evSetSpeed(int)
evSetSpeed::evSetSpeed(int p_duty) {
    setId(evSetSpeed_DesignMotor_id);
    duty = p_duty;
}

bool evSetSpeed::isTypeOf(short id) const {
    if(evSetSpeed_DesignMotor_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evSpeedUp()
evSpeedUp::evSpeedUp() {
    setId(evSpeedUp_DesignMotor_id);
}

bool evSpeedUp::isTypeOf(short id) const {
    if(evSpeedUp_DesignMotor_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evSpeedDown()
evSpeedDown::evSpeedDown() {
    setId(evSpeedDown_DesignMotor_id);
}

bool evSpeedDown::isTypeOf(short id) const {
    if(evSpeedDown_DesignMotor_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

/*********************************************************************
	File Path	: PhytecTest/PhytecConfig/DesignMotor.cpp
*********************************************************************/
