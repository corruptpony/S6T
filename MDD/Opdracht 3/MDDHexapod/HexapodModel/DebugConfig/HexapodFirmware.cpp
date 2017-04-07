/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: HexapodFirmware
//!	Generated Date	: Fri, 7, Apr 2017  
	File Path	: HexapodModel/DebugConfig/HexapodFirmware.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "HexapodFirmware.h"
//## package Test

//## class HexapodFirmware

using namespace std;

HexapodFirmware::HexapodFirmware(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsLeg.setShouldDelete(false);
        }
        itsLeg.setActiveContext(theActiveContext, false);
        {
            itsSensor.setShouldDelete(false);
        }
        itsSensor.setActiveContext(theActiveContext, false);
    }
}

HexapodFirmware::~HexapodFirmware() {
}

Leg* HexapodFirmware::getItsLeg() const {
    return (Leg*) &itsLeg;
}

Sensor* HexapodFirmware::getItsSensor() const {
    return (Sensor*) &itsSensor;
}

bool HexapodFirmware::startBehavior() {
    bool done = true;
    done &= itsLeg.startBehavior();
    done &= itsSensor.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void HexapodFirmware::destroy() {
    itsLeg.destroy();
    itsSensor.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: HexapodModel/DebugConfig/HexapodFirmware.cpp
*********************************************************************/
