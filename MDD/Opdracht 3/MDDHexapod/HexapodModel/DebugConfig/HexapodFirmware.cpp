/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: HexapodFirmware
//!	Generated Date	: Tue, 11, Apr 2017  
	File Path	: HexapodModel/DebugConfig/HexapodFirmware.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "HexapodFirmware.h"
//## package Test

//## class HexapodFirmware

using namespace std;

HexapodFirmware::HexapodFirmware(IOxfActive* theActiveContext) : itsLeg_1(1), itsLeg_2(2), itsLeg_3(3), itsLeg_4(4), itsLeg_5(5), itsLeg_6(6) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsLeg_1.setShouldDelete(false);
        }
        itsLeg_1.setActiveContext(theActiveContext, false);
        {
            itsSensor.setShouldDelete(false);
        }
        itsSensor.setActiveContext(theActiveContext, false);
        {
            itsBody.setShouldDelete(false);
        }
        itsBody.setActiveContext(theActiveContext, false);
        {
            itsLeg_2.setShouldDelete(false);
        }
        itsLeg_2.setActiveContext(theActiveContext, false);
        {
            itsLeg_3.setShouldDelete(false);
        }
        itsLeg_3.setActiveContext(theActiveContext, false);
        {
            itsLeg_4.setShouldDelete(false);
        }
        itsLeg_4.setActiveContext(theActiveContext, false);
        {
            itsLeg_5.setShouldDelete(false);
        }
        itsLeg_5.setActiveContext(theActiveContext, false);
        {
            itsLeg_6.setShouldDelete(false);
        }
        itsLeg_6.setActiveContext(theActiveContext, false);
    }
}

HexapodFirmware::~HexapodFirmware() {
}

Body* HexapodFirmware::getItsBody() const {
    return (Body*) &itsBody;
}

Leg* HexapodFirmware::getItsLeg_1() const {
    return (Leg*) &itsLeg_1;
}

Leg* HexapodFirmware::getItsLeg_2() const {
    return (Leg*) &itsLeg_2;
}

Leg* HexapodFirmware::getItsLeg_3() const {
    return (Leg*) &itsLeg_3;
}

Leg* HexapodFirmware::getItsLeg_4() const {
    return (Leg*) &itsLeg_4;
}

Leg* HexapodFirmware::getItsLeg_5() const {
    return (Leg*) &itsLeg_5;
}

Leg* HexapodFirmware::getItsLeg_6() const {
    return (Leg*) &itsLeg_6;
}

Sensor* HexapodFirmware::getItsSensor() const {
    return (Sensor*) &itsSensor;
}

bool HexapodFirmware::startBehavior() {
    bool done = true;
    done &= itsBody.startBehavior();
    done &= itsLeg_1.startBehavior();
    done &= itsLeg_2.startBehavior();
    done &= itsLeg_3.startBehavior();
    done &= itsLeg_4.startBehavior();
    done &= itsLeg_5.startBehavior();
    done &= itsLeg_6.startBehavior();
    done &= itsSensor.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void HexapodFirmware::destroy() {
    itsBody.destroy();
    itsLeg_1.destroy();
    itsLeg_2.destroy();
    itsLeg_3.destroy();
    itsLeg_4.destroy();
    itsLeg_5.destroy();
    itsLeg_6.destroy();
    itsSensor.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: HexapodModel/DebugConfig/HexapodFirmware.cpp
*********************************************************************/
