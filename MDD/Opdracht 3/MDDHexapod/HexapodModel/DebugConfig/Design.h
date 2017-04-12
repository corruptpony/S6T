/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Design
//!	Generated Date	: Mon, 10, Apr 2017  
	File Path	: HexapodModel/DebugConfig/Design.h
*********************************************************************/

#ifndef Design_H
#define Design_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Body;

//## auto_generated
class ILeg;

//## auto_generated
class ILegCB;

//## auto_generated
class ISensorCB;

//## auto_generated
class Leg;

//## auto_generated
class Sensor;

//#[ ignore
#define evMove_Design_id 28001

#define evReady_Design_id 28002

#define evAlarm_Design_id 28003

#define evRelax_Design_id 28004

#define evStiffen_Design_id 28005

#define evFreeze_Design_id 28006

#define evContinue_Design_id 28007

#define evClear_Design_id 28008
//#]

//## package Design



//## event evMove()
class evMove : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evMove();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evReady()
class evReady : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evReady();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evAlarm()
class evAlarm : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evAlarm();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evRelax()
class evRelax : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evRelax();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evStiffen()
class evStiffen : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStiffen();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evFreeze()
class evFreeze : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evFreeze();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evContinue()
class evContinue : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evContinue();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

//## event evClear()
class evClear : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evClear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#endif
/*********************************************************************
	File Path	: HexapodModel/DebugConfig/Design.h
*********************************************************************/
