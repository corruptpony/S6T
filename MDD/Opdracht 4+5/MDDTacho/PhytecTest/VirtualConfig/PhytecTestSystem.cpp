/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: PhytecTestSystem
//!	Generated Date	: Mon, 8, May 2017  
	File Path	: PhytecTest/VirtualConfig/PhytecTestSystem.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "PhytecTestSystem.h"
//## auto_generated
#include <fstream>
//## package Test

//## class PhytecTestSystem

using namespace std;

//## class PhytecTestSystem::TachoTester

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

PhytecTestSystem::TachoTester_C::control_C::InBound_C::InBound_C() {
    itsITachoCB = NULL;
    port = NULL;
}

PhytecTestSystem::TachoTester_C::control_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool PhytecTestSystem::TachoTester_C::control_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsITachoCB != NULL) {
            if (event->isTypeOf(evCount_Design_id)) {
                res = itsITachoCB->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool PhytecTestSystem::TachoTester_C::control_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsITachoCB != NULL) {
            if (event->isTypeOf(evCount_Design_id)) {
                res = itsITachoCB->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

iTachoCB* PhytecTestSystem::TachoTester_C::control_C::InBound_C::getItsITachoCB() const {
    return itsITachoCB;
}

void PhytecTestSystem::TachoTester_C::control_C::InBound_C::setItsITachoCB(iTachoCB* p_iTachoCB) {
    itsITachoCB = p_iTachoCB;
}

PhytecTestSystem::TachoTester_C::control_C* PhytecTestSystem::TachoTester_C::control_C::InBound_C::getPort() const {
    return port;
}

void PhytecTestSystem::TachoTester_C::control_C::InBound_C::setPort(PhytecTestSystem::TachoTester_C::control_C* p_control_C) {
    _setPort(p_control_C);
}

void PhytecTestSystem::TachoTester_C::control_C::InBound_C::cleanUpRelations() {
    if(itsITachoCB != NULL)
        {
            itsITachoCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void PhytecTestSystem::TachoTester_C::control_C::InBound_C::__setPort(PhytecTestSystem::TachoTester_C::control_C* p_control_C) {
    port = p_control_C;
}

void PhytecTestSystem::TachoTester_C::control_C::InBound_C::_setPort(PhytecTestSystem::TachoTester_C::control_C* p_control_C) {
    __setPort(p_control_C);
}

void PhytecTestSystem::TachoTester_C::control_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

PhytecTestSystem::TachoTester_C::control_C::OutBound_C::OutBound_C() {
    itsITacho = NULL;
}

PhytecTestSystem::TachoTester_C::control_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool PhytecTestSystem::TachoTester_C::control_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        if (itsITacho != NULL) {
            if (event->isTypeOf(evStartTacho_Design_id)) {
                res = itsITacho->send(event, params);
                return res;
            }
            if (event->isTypeOf(evStopTacho_Design_id)) {
                res = itsITacho->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool PhytecTestSystem::TachoTester_C::control_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        if (itsITacho != NULL) {
            if (event->isTypeOf(evStartTacho_Design_id)) {
                res = itsITacho->send(event);
                return res;
            }
            if (event->isTypeOf(evStopTacho_Design_id)) {
                res = itsITacho->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

OMReactive* PhytecTestSystem::TachoTester_C::control_C::OutBound_C::getItsITacho() const {
    return itsITacho;
}

void PhytecTestSystem::TachoTester_C::control_C::OutBound_C::setItsITacho(OMReactive* p_OMReactive) {
    itsITacho = p_OMReactive;
}

void PhytecTestSystem::TachoTester_C::control_C::OutBound_C::cleanUpRelations() {
    if(itsITacho != NULL)
        {
            itsITacho = NULL;
        }
}

PhytecTestSystem::TachoTester_C::control_C::control_C() {
    initRelations();
}

PhytecTestSystem::TachoTester_C::control_C::~control_C() {
}

void PhytecTestSystem::TachoTester_C::control_C::connectTachoTester(TachoTester_C* part) {
    //#[ operation connectTachoTester(TachoTester_C*)
    InBound.setItsITachoCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iTacho* PhytecTestSystem::TachoTester_C::control_C::getItsITacho() {
    //#[ operation getItsITacho()
    return &OutBound;
    //#]
}

iTachoCB* PhytecTestSystem::TachoTester_C::control_C::getItsITachoCB() {
    //#[ operation getItsITachoCB()
    return &InBound;
    //#]
}

void PhytecTestSystem::TachoTester_C::control_C::setItsITacho(OMReactive* p_iTacho) {
    //#[ operation setItsITacho(OMReactive*)
    OutBound.setItsITacho(p_iTacho);
    //#]
}

void PhytecTestSystem::TachoTester_C::control_C::setItsITachoCB(iTachoCB* p_iTachoCB) {
    //#[ operation setItsITachoCB(iTachoCB*)
    InBound.setItsITachoCB(p_iTachoCB);
    //#]
}

PhytecTestSystem::TachoTester_C::control_C::InBound_C* PhytecTestSystem::TachoTester_C::control_C::getInBound() const {
    return (PhytecTestSystem::TachoTester_C::control_C::InBound_C*) &InBound;
}

PhytecTestSystem::TachoTester_C::control_C::OutBound_C* PhytecTestSystem::TachoTester_C::control_C::getOutBound() const {
    return (PhytecTestSystem::TachoTester_C::control_C::OutBound_C*) &OutBound;
}

void PhytecTestSystem::TachoTester_C::control_C::initRelations() {
    InBound._setPort(this);
}

void PhytecTestSystem::TachoTester_C::control_C::destroy() {
}
//#]

PhytecTestSystem::TachoTester_C::TachoTester_C(IOxfActive* theActiveContext) : totalCount(0) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

PhytecTestSystem::TachoTester_C::~TachoTester_C() {
    cleanUpRelations();
    cancelTimeouts();
}

PhytecTestSystem::TachoTester_C::control_C* PhytecTestSystem::TachoTester_C::getControl() const {
    return control;
}

PhytecTestSystem::TachoTester_C::control_C* PhytecTestSystem::TachoTester_C::get_control() const {
    return control;
}

PhytecTestSystem::TachoTester_C::control_C* PhytecTestSystem::TachoTester_C::newControl() {
    control = new PhytecTestSystem::TachoTester_C::control_C;
    return control;
}

void PhytecTestSystem::TachoTester_C::deleteControl() {
    delete control;
    control = NULL;
}

int PhytecTestSystem::TachoTester_C::getTotalCount() const {
    return totalCount;
}

void PhytecTestSystem::TachoTester_C::setTotalCount(int p_totalCount) {
    totalCount = p_totalCount;
}

bool PhytecTestSystem::TachoTester_C::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PhytecTestSystem::TachoTester_C::initRelations() {
    control = newControl();
    if(get_control())
       get_control()->connectTachoTester(this);
}

void PhytecTestSystem::TachoTester_C::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Counting_timeout = NULL;
}

void PhytecTestSystem::TachoTester_C::cleanUpRelations() {
    {
        deleteControl();
    }
}

void PhytecTestSystem::TachoTester_C::cancelTimeouts() {
    if(Counting_timeout != NULL)
        {
            Counting_timeout->cancel();
            Counting_timeout = NULL;
        }
}

bool PhytecTestSystem::TachoTester_C::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Counting_timeout == arg)
        {
            Counting_timeout = NULL;
            res = true;
        }
    return res;
}

void PhytecTestSystem::TachoTester_C::rootState_entDef() {
    {
        pushNullTransition();
        rootState_subState = sendaction_4;
        rootState_active = sendaction_4;
        //#[ state ROOT.sendaction_4.(Entry) 
        OUT_PORT(control)->GEN(evStartTacho);
        //#]
    }
}

IOxfReactive::TakeEventStatus PhytecTestSystem::TachoTester_C::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Counting:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Counting_timeout)
                        {
                            if(Counting_timeout != NULL)
                                {
                                    Counting_timeout->cancel();
                                    Counting_timeout = NULL;
                                }
                            //#[ state ROOT.Counting.(Exit) 
                            cout << totalCount << endl;
                            totalCount = 0;
                            //#]
                            pushNullTransition();
                            rootState_subState = sendaction_3;
                            rootState_active = sendaction_3;
                            //#[ state ROOT.sendaction_3.(Entry) 
                            OUT_PORT(control)->GEN(evStopTacho);
                            //#]
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evCount_Design_id))
                {
                    OMSETPARAMS(evCount);
                    //#[ transition 4 
                    totalCount += params->count;
                    //#]
                    res = eventConsumed;
                }
            
            break;
        }
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    rootState_subState = sendaction_4;
                    rootState_active = sendaction_4;
                    //#[ state ROOT.sendaction_4.(Entry) 
                    OUT_PORT(control)->GEN(evStartTacho);
                    //#]
                    res = eventConsumed;
                }
            
            break;
        }
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = Counting;
                    rootState_active = Counting;
                    Counting_timeout = scheduleTimeout(1000, NULL);
                    res = eventConsumed;
                }
            
            break;
        }
        default:
            break;
    }
    return res;
}

PhytecTestSystem::PhytecTestSystem(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsTacho.setShouldDelete(false);
        }
        itsTacho.setActiveContext(theActiveContext, false);
        {
            TachoTester.setShouldDelete(false);
        }
        TachoTester.setActiveContext(theActiveContext, false);
    }
    initRelations();
}

PhytecTestSystem::~PhytecTestSystem() {
}

PhytecTestSystem::TachoTester_C* PhytecTestSystem::getTachoTester() const {
    return (PhytecTestSystem::TachoTester_C*) &TachoTester;
}

Tacho* PhytecTestSystem::getItsTacho() const {
    return (Tacho*) &itsTacho;
}

bool PhytecTestSystem::startBehavior() {
    bool done = true;
    done &= TachoTester.startBehavior();
    done &= itsTacho.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void PhytecTestSystem::initRelations() {
    {
    	
    	itsTacho.get_control()->setItsITachoCB(TachoTester.get_control()->getItsITachoCB());
    	
    }{
    	
    	TachoTester.get_control()->setItsITacho(itsTacho.get_control()->getItsITacho());
    	
    }
}

void PhytecTestSystem::destroy() {
    TachoTester.destroy();
    itsTacho.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/PhytecTestSystem.cpp
*********************************************************************/
