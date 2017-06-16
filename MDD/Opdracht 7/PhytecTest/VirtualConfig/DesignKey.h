/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: DesignKey
//!	Generated Date	: Mon, 12, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/DesignKey.h
*********************************************************************/

#ifndef DesignKey_H
#define DesignKey_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "VirtualDefs.h"
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Key;

//## auto_generated
class iKeyCB;

//#[ ignore
#define evKey_DesignKey_id 1
//#]

//## package DesignKey



//## event evKey(int)
class evKey : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evKey(int p_keyNr = 0);
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
    
    ////    Framework    ////
    
    int keyNr;		//## statechart_method
};

#endif
/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/DesignKey.h
*********************************************************************/
