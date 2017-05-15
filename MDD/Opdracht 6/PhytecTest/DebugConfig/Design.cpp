/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: DebugConfig
	Model Element	: Design
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/DebugConfig/Design.cpp
*********************************************************************/

//## auto_generated
#include "Design.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "iKeyCB.h"
//## auto_generated
#include "Key.h"
//## package Design



//## event evKey(int)
evKey::evKey(int p_keyNr) {
    setId(evKey_Design_id);
    keyNr = p_keyNr;
}

bool evKey::isTypeOf(short id) const {
    if(evKey_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

/*********************************************************************
	File Path	: PhytecTest/DebugConfig/Design.cpp
*********************************************************************/
