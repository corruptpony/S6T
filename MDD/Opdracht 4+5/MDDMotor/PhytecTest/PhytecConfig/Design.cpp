/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: PhytecConfig
	Model Element	: Design
//!	Generated Date	: Mon, 8, May 2017  
	File Path	: PhytecTest/PhytecConfig/Design.cpp
*********************************************************************/

//## auto_generated
#include "Design.h"
//## auto_generated
#include "iMotor.h"
//## auto_generated
#include "Motor.h"
//## package Design



//## event evStartMotor()
evStartMotor::evStartMotor() {
    setId(evStartMotor_Design_id);
}

bool evStartMotor::isTypeOf(short id) const {
    if(evStartMotor_Design_id==id)
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
    setId(evStopMotor_Design_id);
}

bool evStopMotor::isTypeOf(short id) const {
    if(evStopMotor_Design_id==id)
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
    setId(evSetDirection_Design_id);
    direction = p_direction;
}

bool evSetDirection::isTypeOf(short id) const {
    if(evSetDirection_Design_id==id)
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
    setId(evSetSpeed_Design_id);
    duty = p_duty;
}

bool evSetSpeed::isTypeOf(short id) const {
    if(evSetSpeed_Design_id==id)
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
    setId(evSpeedUp_Design_id);
}

bool evSpeedUp::isTypeOf(short id) const {
    if(evSpeedUp_Design_id==id)
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
    setId(evSpeedDown_Design_id);
}

bool evSpeedDown::isTypeOf(short id) const {
    if(evSpeedDown_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

/*********************************************************************
	File Path	: PhytecTest/PhytecConfig/Design.cpp
*********************************************************************/
