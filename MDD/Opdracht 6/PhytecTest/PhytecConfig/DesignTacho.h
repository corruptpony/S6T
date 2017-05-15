/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: PhytecConfig
	Model Element	: DesignTacho
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/PhytecConfig/DesignTacho.h
*********************************************************************/

#ifndef DesignTacho_H
#define DesignTacho_H

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
#define evStartTacho_DesignTacho_id 11201

#define evStopTacho_DesignTacho_id 11202

#define evCount_DesignTacho_id 11203
//#]

//## package DesignTacho



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
	File Path	: PhytecTest/PhytecConfig/DesignTacho.h
*********************************************************************/
