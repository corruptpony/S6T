/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: DebugConfig
	Model Element	: Design
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/DebugConfig/Design.h
*********************************************************************/

#ifndef Design_H
#define Design_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "DebugDefs.h"
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Controller;

//## auto_generated
class Key;

//## auto_generated
class iKeyCB;

//#[ ignore
#define evKey_Design_id 1
//#]

//## package Design



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
	File Path	: PhytecTest/DebugConfig/Design.h
*********************************************************************/