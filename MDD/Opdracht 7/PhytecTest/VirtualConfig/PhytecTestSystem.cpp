/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: PhytecTestSystem
//!	Generated Date	: Mon, 12, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/PhytecTestSystem.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "PhytecTestSystem.h"
//## package Test

//## class PhytecTestSystem

using namespace std;

PhytecTestSystem::PhytecTestSystem(IOxfActive* theActiveContext) : itsLed(LED1, ENABLE_LED1), itsLed_0(LED2, ENABLE_LED2), itsLed_1(LED3, ENABLE_LED3), itsKey(1), itsKey_0(2), itsKey_1(3) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsController.setShouldDelete(false);
        }
        itsController.setActiveContext(theActiveContext, false);
        {
            itsLed.setShouldDelete(false);
        }
        itsLed.setActiveContext(theActiveContext, false);
        {
            itsLed_0.setShouldDelete(false);
        }
        itsLed_0.setActiveContext(theActiveContext, false);
        {
            itsLed_1.setShouldDelete(false);
        }
        itsLed_1.setActiveContext(theActiveContext, false);
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
        {
            itsMotor.setShouldDelete(false);
        }
        itsMotor.setActiveContext(theActiveContext, false);
        {
            itsTacho.setShouldDelete(false);
        }
        itsTacho.setActiveContext(theActiveContext, false);
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

Led* PhytecTestSystem::getItsLed() const {
    return (Led*) &itsLed;
}

Led* PhytecTestSystem::getItsLed_0() const {
    return (Led*) &itsLed_0;
}

Led* PhytecTestSystem::getItsLed_1() const {
    return (Led*) &itsLed_1;
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
    done &= itsLed.startBehavior();
    done &= itsLed_0.startBehavior();
    done &= itsLed_1.startBehavior();
    done &= itsMotor.startBehavior();
    done &= itsTacho.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void PhytecTestSystem::initRelations() {
    {
    	
    	itsController.get_m_control()->setItsIMotor(itsMotor.get_control()->getItsIMotor());
    	
    }
    {
    	
    	itsTacho.get_control()->setItsITachoCB(itsController.get_t_control()->getItsITachoCB());
    	
    }{
    	
    	itsController.get_t_control()->setItsITacho(itsTacho.get_control()->getItsITacho());
    	
    }
    {
    	
    	itsKey.get_Out()->setItsIKeyCB(itsController.get_k_in()->getItsIKeyCB());
    	
    }
    {
    	
    	itsKey_0.get_Out()->setItsIKeyCB(itsController.get_k_in()->getItsIKeyCB());
    	
    }
    {
    	
    	itsKey_1.get_Out()->setItsIKeyCB(itsController.get_k_in()->getItsIKeyCB());
    	
    }
    {
    	
    	itsController.get_l1()->setItsILed(itsLed.get_control()->getItsILed());
    	
    }
    {
    	
    	itsController.get_l2()->setItsILed(itsLed_0.get_control()->getItsILed());
    	
    }
    {
    	
    	itsController.get_l3()->setItsILed(itsLed_1.get_control()->getItsILed());
    	
    }
}

void PhytecTestSystem::destroy() {
    itsController.destroy();
    itsKey.destroy();
    itsKey_0.destroy();
    itsKey_1.destroy();
    itsLed.destroy();
    itsLed_0.destroy();
    itsLed_1.destroy();
    itsMotor.destroy();
    itsTacho.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/PhytecTestSystem.cpp
*********************************************************************/
