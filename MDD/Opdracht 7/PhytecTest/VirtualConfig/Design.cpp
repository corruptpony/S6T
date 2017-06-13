/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: Design
//!	Generated Date	: Mon, 12, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/Design.cpp
*********************************************************************/

//## auto_generated
#include "Design.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "iLed.h"
//## auto_generated
#include "Led.h"
//## package Design



//## event evOn()
evOn::evOn() {
    setId(evOn_Design_id);
}

bool evOn::isTypeOf(short id) const {
    if(evOn_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evOff()
evOff::evOff() {
    setId(evOff_Design_id);
}

bool evOff::isTypeOf(short id) const {
    if(evOff_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evBlinkOn()
evBlinkOn::evBlinkOn() {
    setId(evBlinkOn_Design_id);
}

bool evBlinkOn::isTypeOf(short id) const {
    if(evBlinkOn_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/Design.cpp
*********************************************************************/
