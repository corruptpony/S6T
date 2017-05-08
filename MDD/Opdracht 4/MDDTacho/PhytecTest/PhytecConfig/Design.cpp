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
#include "iTacho.h"
//## auto_generated
#include "iTachoCB.h"
//## auto_generated
#include "Tacho.h"
//## package Design



//## event evStartTacho()
evStartTacho::evStartTacho() {
    setId(evStartTacho_Design_id);
}

bool evStartTacho::isTypeOf(short id) const {
    if(evStartTacho_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evStopTacho()
evStopTacho::evStopTacho() {
    setId(evStopTacho_Design_id);
}

bool evStopTacho::isTypeOf(short id) const {
    if(evStopTacho_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evCount(int)
evCount::evCount(int p_count) {
    setId(evCount_Design_id);
    count = p_count;
}

bool evCount::isTypeOf(short id) const {
    if(evCount_Design_id==id)
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
