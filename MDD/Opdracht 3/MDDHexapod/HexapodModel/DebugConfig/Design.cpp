/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Design
//!	Generated Date	: Mon, 10, Apr 2017  
	File Path	: HexapodModel/DebugConfig/Design.cpp
*********************************************************************/

//## auto_generated
#include "Design.h"
//## auto_generated
#include "Body.h"
//## auto_generated
#include "ILeg.h"
//## auto_generated
#include "ILegCB.h"
//## auto_generated
#include "ISensorCB.h"
//## auto_generated
#include "Leg.h"
//## auto_generated
#include "Sensor.h"
//## package Design



//## event evMove()
evMove::evMove() {
    setId(evMove_Design_id);
}

bool evMove::isTypeOf(short id) const {
    if(evMove_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evReady()
evReady::evReady() {
    setId(evReady_Design_id);
}

bool evReady::isTypeOf(short id) const {
    if(evReady_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evAlarm()
evAlarm::evAlarm() {
    setId(evAlarm_Design_id);
}

bool evAlarm::isTypeOf(short id) const {
    if(evAlarm_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evRelax()
evRelax::evRelax() {
    setId(evRelax_Design_id);
}

bool evRelax::isTypeOf(short id) const {
    if(evRelax_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evStiffen()
evStiffen::evStiffen() {
    setId(evStiffen_Design_id);
}

bool evStiffen::isTypeOf(short id) const {
    if(evStiffen_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evFreeze()
evFreeze::evFreeze() {
    setId(evFreeze_Design_id);
}

bool evFreeze::isTypeOf(short id) const {
    if(evFreeze_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evContinue()
evContinue::evContinue() {
    setId(evContinue_Design_id);
}

bool evContinue::isTypeOf(short id) const {
    if(evContinue_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evClear()
evClear::evClear() {
    setId(evClear_Design_id);
}

bool evClear::isTypeOf(short id) const {
    if(evClear_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

/*********************************************************************
	File Path	: HexapodModel/DebugConfig/Design.cpp
*********************************************************************/
