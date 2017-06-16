/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: Design
//!	Generated Date	: Mon, 12, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/Design.h
*********************************************************************/

#ifndef Design_H
#define Design_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "VirtualDefs.h"
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Controller;

//## auto_generated
class Led;

//## auto_generated
class iLed;

//#[ ignore
#define evOn_Design_id 201

#define evOff_Design_id 202

#define evBlinkOn_Design_id 203
//#]

//## package Design



//## event evOn()
class evOn : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evOff()
class evOff : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evBlinkOn()
class evBlinkOn : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evBlinkOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#endif
/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/Design.h
*********************************************************************/
