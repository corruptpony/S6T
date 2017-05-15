/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: PhytecConfig
	Model Element	: DesignTacho
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/PhytecConfig/DesignTacho.cpp
*********************************************************************/

//## auto_generated
#include "DesignTacho.h"
//## auto_generated
#include "iTacho.h"
//## auto_generated
#include "iTachoCB.h"
//## auto_generated
#include "Tacho.h"
//## package DesignTacho



//## event evStartTacho()
evStartTacho::evStartTacho() {
    setId(evStartTacho_DesignTacho_id);
}

bool evStartTacho::isTypeOf(short id) const {
    if(evStartTacho_DesignTacho_id==id)
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
    setId(evStopTacho_DesignTacho_id);
}

bool evStopTacho::isTypeOf(short id) const {
    if(evStopTacho_DesignTacho_id==id)
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
    setId(evCount_DesignTacho_id);
    count = p_count;
}

bool evCount::isTypeOf(short id) const {
    if(evCount_DesignTacho_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

/*********************************************************************
	File Path	: PhytecTest/PhytecConfig/DesignTacho.cpp
*********************************************************************/
