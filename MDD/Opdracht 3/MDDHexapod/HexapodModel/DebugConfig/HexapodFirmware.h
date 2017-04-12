/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: HexapodFirmware
//!	Generated Date	: Tue, 11, Apr 2017  
	File Path	: HexapodModel/DebugConfig/HexapodFirmware.h
*********************************************************************/

#ifndef HexapodFirmware_H
#define HexapodFirmware_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "Test.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsBody
#include "Body.h"
//## classInstance itsLeg_1
#include "Leg.h"
//## classInstance itsSensor
#include "Sensor.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## package Test

//## class HexapodFirmware
class HexapodFirmware : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    HexapodFirmware(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~HexapodFirmware();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Body* getItsBody() const;
    
    //## auto_generated
    Leg* getItsLeg_1() const;
    
    //## auto_generated
    Leg* getItsLeg_2() const;
    
    //## auto_generated
    Leg* getItsLeg_3() const;
    
    //## auto_generated
    Leg* getItsLeg_4() const;
    
    //## auto_generated
    Leg* getItsLeg_5() const;
    
    //## auto_generated
    Leg* getItsLeg_6() const;
    
    //## auto_generated
    Sensor* getItsSensor() const;
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Relations and components    ////

protected :

    Body itsBody;		//## classInstance itsBody
    
    Leg itsLeg_1;		//## classInstance itsLeg_1
    
    Leg itsLeg_2;		//## classInstance itsLeg_2
    
    Leg itsLeg_3;		//## classInstance itsLeg_3
    
    Leg itsLeg_4;		//## classInstance itsLeg_4
    
    Leg itsLeg_5;		//## classInstance itsLeg_5
    
    Leg itsLeg_6;		//## classInstance itsLeg_6
    
    Sensor itsSensor;		//## classInstance itsSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void destroy();
};

#endif
/*********************************************************************
	File Path	: HexapodModel/DebugConfig/HexapodFirmware.h
*********************************************************************/
