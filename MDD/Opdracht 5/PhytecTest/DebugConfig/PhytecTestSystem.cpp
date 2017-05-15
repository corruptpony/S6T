/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: DebugConfig
	Model Element	: PhytecTestSystem
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/DebugConfig/PhytecTestSystem.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "PhytecTestSystem.h"
//## package Test

//## class PhytecTestSystem

using namespace std;

PhytecTestSystem::PhytecTestSystem(IOxfActive* theActiveContext) : itsKey(1), itsKey_0(2), itsKey_1(3) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsController.setShouldDelete(false);
        }
        itsController.setActiveContext(theActiveContext, false);
        {
            itsMotor.setShouldDelete(false);
        }
        itsMotor.setActiveContext(theActiveContext, false);
        {
            itsTacho.setShouldDelete(false);
        }
        itsTacho.setActiveContext(theActiveContext, false);
        {
            itsKey.setShouldDelete(false);
        }
        itsKey.setActiveContext(theActiveContext, false);
        {
            itsKey_0.setShouldDelete(false);
        }
        itsKey_0.setActiveContext(theActiveContext, false);
        {
            itsKey_1.setShouldDelete(false);
        }
        itsKey_1.setActiveContext(theActiveContext, false);
    }
    initRelations();
}

PhytecTestSystem::~PhytecTestSystem() {
}

Controller* PhytecTestSystem::getItsController() const {
    return (Controller*) &itsController;
}

Key* PhytecTestSystem::getItsKey() const {
    return (Key*) &itsKey;
}

Key* PhytecTestSystem::getItsKey_0() const {
    return (Key*) &itsKey_0;
}

Key* PhytecTestSystem::getItsKey_1() const {
    return (Key*) &itsKey_1;
}

Motor* PhytecTestSystem::getItsMotor() const {
    return (Motor*) &itsMotor;
}

Tacho* PhytecTestSystem::getItsTacho() const {
    return (Tacho*) &itsTacho;
}

bool PhytecTestSystem::startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= itsKey.startBehavior();
    done &= itsKey_0.startBehavior();
    done &= itsKey_1.startBehavior();
    done &= itsMotor.startBehavior();
    done &= itsTacho.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void PhytecTestSystem::initRelations() {
    {
    	
    	itsTacho.get_control()->setItsITachoCB(itsController.get_t()->getItsITachoCB());
    	
    }{
    	
    	itsController.get_t()->setItsITacho(itsTacho.get_control()->getItsITacho());
    	
    }
    {
    	
    	itsController.get_m()->setItsIMotor(itsMotor.get_control()->getItsIMotor());
    	
    }
    {
    	
    	itsKey.get_Out()->setItsIKeyCB(itsController.get_k()->getItsIKeyCB());
    	
    }
    {
    	
    	itsKey_1.get_Out()->setItsIKeyCB(itsController.get_k()->getItsIKeyCB());
    	
    }
    {
    	
    	itsKey_0.get_Out()->setItsIKeyCB(itsController.get_k()->getItsIKeyCB());
    	
    }
}

void PhytecTestSystem::destroy() {
    itsController.destroy();
    itsKey.destroy();
    itsKey_0.destroy();
    itsKey_1.destroy();
    itsMotor.destroy();
    itsTacho.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: PhytecTest/DebugConfig/PhytecTestSystem.cpp
*********************************************************************/
