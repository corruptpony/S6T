/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: DistributedHelloTestSystem
//!	Generated Date	: Tue, 14, Feb 2017  
	File Path	: HelloApp/HelloAppConfig/DistributedHelloTestSystem.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "DistributedHelloTestSystem.h"
//## package Test

//## class DistributedHelloTestSystem

using namespace std;

DistributedHelloTestSystem::DistributedHelloTestSystem(IOxfActive* theActiveContext) : itsDisplay("Scherm1"), itsDisplay_1("Scherm2") {
    setActiveContext(theActiveContext, false);
    {
        {
            itsDisplay.setShouldDelete(false);
        }
        itsDisplay.setActiveContext(theActiveContext, false);
        {
            itsDisplay_1.setShouldDelete(false);
        }
        itsDisplay_1.setActiveContext(theActiveContext, false);
    }
    initRelations();
}

DistributedHelloTestSystem::~DistributedHelloTestSystem() {
}

Controller* DistributedHelloTestSystem::getItsController() const {
    return (Controller*) &itsController;
}

Display* DistributedHelloTestSystem::getItsDisplay() const {
    return (Display*) &itsDisplay;
}

Display* DistributedHelloTestSystem::getItsDisplay_1() const {
    return (Display*) &itsDisplay_1;
}

bool DistributedHelloTestSystem::startBehavior() {
    bool done = true;
    done &= itsDisplay.startBehavior();
    done &= itsDisplay_1.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void DistributedHelloTestSystem::initRelations() {
    {
    	
    	itsController.get_dsp1()->setItsIDisplay(itsDisplay.get_ctl()->getItsIDisplay());
    	
    }{
    	
    	itsDisplay.get_ctl()->setItsIControl(itsController.get_dsp1()->getItsIControl());
    	
    }
    {
    	
    	itsController.get_dsp2()->setItsIDisplay(itsDisplay_1.get_ctl()->getItsIDisplay());
    	
    }{
    	
    	itsDisplay_1.get_ctl()->setItsIControl(itsController.get_dsp2()->getItsIControl());
    	
    }
}

void DistributedHelloTestSystem::destroy() {
    itsDisplay.destroy();
    itsDisplay_1.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/DistributedHelloTestSystem.cpp
*********************************************************************/
