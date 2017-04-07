/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: HexapodFirmware
//!	Generated Date	: Fri, 7, Apr 2017  
	File Path	: HexapodModel/DebugConfig/HexapodFirmware.h
*********************************************************************/

#ifndef HexapodFirmware_H
#define HexapodFirmware_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsLeg
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
    Leg* getItsLeg() const;
    
    //## auto_generated
    Sensor* getItsSensor() const;
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Relations and components    ////

protected :

    Leg itsLeg;		//## classInstance itsLeg
    
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
