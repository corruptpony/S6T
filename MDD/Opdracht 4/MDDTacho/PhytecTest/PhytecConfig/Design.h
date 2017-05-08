/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: PhytecConfig
	Model Element	: Design
//!	Generated Date	: Mon, 8, May 2017  
	File Path	: PhytecTest/PhytecConfig/Design.h
*********************************************************************/

#ifndef Design_H
#define Design_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "PhytecDefs.h"
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Tacho;

//## auto_generated
class iTacho;

//## auto_generated
class iTachoCB;

//#[ ignore
#define evStartTacho_Design_id 28001

#define evStopTacho_Design_id 28002

#define evCount_Design_id 28003
//#]

//## package Design



//## event evStartTacho()
class evStartTacho : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStartTacho();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evStopTacho()
class evStopTacho : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStopTacho();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evCount(int)
class evCount : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evCount(int p_count);
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
    
    ////    Framework    ////
    
    int count;		//## statechart_method
};

#endif
/*********************************************************************
	File Path	: PhytecTest/PhytecConfig/Design.h
*********************************************************************/
