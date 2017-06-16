/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: DesignKey
//!	Generated Date	: Mon, 12, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/DesignKey.cpp
*********************************************************************/

//## auto_generated
#include "DesignKey.h"
//## auto_generated
#include "iKeyCB.h"
//## auto_generated
#include "Key.h"
//## package DesignKey



//## event evKey(int)
evKey::evKey(int p_keyNr) {
    setId(evKey_DesignKey_id);
    keyNr = p_keyNr;
}

bool evKey::isTypeOf(short id) const {
    if(evKey_DesignKey_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/DesignKey.cpp
*********************************************************************/
