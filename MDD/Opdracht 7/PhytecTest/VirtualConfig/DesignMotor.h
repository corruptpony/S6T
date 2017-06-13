/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: DesignMotor
//!	Generated Date	: Mon, 12, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/DesignMotor.h
*********************************************************************/

#ifndef DesignMotor_H
#define DesignMotor_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "VirtualDefs.h"
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Motor;

//## auto_generated
class iMotor;

//#[ ignore
#define evStartMotor_DesignMotor_id 28001

#define evStopMotor_DesignMotor_id 28002

#define evSetDirection_DesignMotor_id 28003

#define evSetSpeed_DesignMotor_id 28004

#define evSpeedUp_DesignMotor_id 28005

#define evSpeedDown_DesignMotor_id 28006
//#]

//## package DesignMotor



//## event evStartMotor()
class evStartMotor : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStartMotor();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evStopMotor()
class evStopMotor : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStopMotor();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evSetDirection(int)
class evSetDirection : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evSetDirection(int p_direction);
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
    
    ////    Framework    ////
    
    int direction;		//## statechart_method
};

//## event evSetSpeed(int)
class evSetSpeed : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evSetSpeed(int p_duty);
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
    
    ////    Framework    ////
    
    int duty;		//## statechart_method
};

//## event evSpeedUp()
class evSpeedUp : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evSpeedUp();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evSpeedDown()
class evSpeedDown : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evSpeedDown();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#endif
/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/DesignMotor.h
*********************************************************************/
