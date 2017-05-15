/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: DebugConfig
	Model Element	: Tacho
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/DebugConfig/Tacho.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Tacho.h"
//## package DesignTacho

//## class Tacho

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Tacho::control_C::InBound_C::InBound_C() {
    itsITacho = NULL;
    port = NULL;
}

Tacho::control_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Tacho::control_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsITacho != NULL) {
            if (event->isTypeOf(evStartTacho_DesignTacho_id)) {
                res = itsITacho->send(event, params);
                return res;
            }
            if (event->isTypeOf(evStopTacho_DesignTacho_id)) {
                res = itsITacho->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Tacho::control_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsITacho != NULL) {
            if (event->isTypeOf(evStartTacho_DesignTacho_id)) {
                res = itsITacho->send(event);
                return res;
            }
            if (event->isTypeOf(evStopTacho_DesignTacho_id)) {
                res = itsITacho->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

iTacho* Tacho::control_C::InBound_C::getItsITacho() const {
    return itsITacho;
}

void Tacho::control_C::InBound_C::setItsITacho(iTacho* p_iTacho) {
    itsITacho = p_iTacho;
}

Tacho::control_C* Tacho::control_C::InBound_C::getPort() const {
    return port;
}

void Tacho::control_C::InBound_C::setPort(Tacho::control_C* p_control_C) {
    _setPort(p_control_C);
}

void Tacho::control_C::InBound_C::cleanUpRelations() {
    if(itsITacho != NULL)
        {
            itsITacho = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Tacho::control_C::InBound_C::__setPort(Tacho::control_C* p_control_C) {
    port = p_control_C;
}

void Tacho::control_C::InBound_C::_setPort(Tacho::control_C* p_control_C) {
    __setPort(p_control_C);
}

void Tacho::control_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Tacho::control_C::OutBound_C::OutBound_C() {
    itsITachoCB = NULL;
}

Tacho::control_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Tacho::control_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        if (itsITachoCB != NULL) {
            if (event->isTypeOf(evCount_DesignTacho_id)) {
                res = itsITachoCB->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Tacho::control_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        if (itsITachoCB != NULL) {
            if (event->isTypeOf(evCount_DesignTacho_id)) {
                res = itsITachoCB->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

OMReactive* Tacho::control_C::OutBound_C::getItsITachoCB() const {
    return itsITachoCB;
}

void Tacho::control_C::OutBound_C::setItsITachoCB(OMReactive* p_OMReactive) {
    itsITachoCB = p_OMReactive;
}

void Tacho::control_C::OutBound_C::cleanUpRelations() {
    if(itsITachoCB != NULL)
        {
            itsITachoCB = NULL;
        }
}

Tacho::control_C::control_C() {
    initRelations();
}

Tacho::control_C::~control_C() {
}

void Tacho::control_C::connectTacho(Tacho* part) {
    //#[ operation connectTacho(Tacho*)
    InBound.setItsITacho(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iTacho* Tacho::control_C::getItsITacho() {
    //#[ operation getItsITacho()
    return &InBound;
    //#]
}

iTachoCB* Tacho::control_C::getItsITachoCB() {
    //#[ operation getItsITachoCB()
    return &OutBound;
    //#]
}

void Tacho::control_C::setItsITacho(iTacho* p_iTacho) {
    //#[ operation setItsITacho(iTacho*)
    InBound.setItsITacho(p_iTacho);
    //#]
}

void Tacho::control_C::setItsITachoCB(OMReactive* p_iTachoCB) {
    //#[ operation setItsITachoCB(OMReactive*)
    OutBound.setItsITachoCB(p_iTachoCB);
    //#]
}

Tacho::control_C::InBound_C* Tacho::control_C::getInBound() const {
    return (Tacho::control_C::InBound_C*) &InBound;
}

Tacho::control_C::OutBound_C* Tacho::control_C::getOutBound() const {
    return (Tacho::control_C::OutBound_C*) &OutBound;
}

void Tacho::control_C::initRelations() {
    InBound._setPort(this);
}

void Tacho::control_C::destroy() {
}
//#]

Tacho::Tacho(IOxfActive* theActiveContext) : interval(1000) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Tacho::~Tacho() {
    cleanUpRelations();
    cancelTimeouts();
}

int Tacho::getCount() {
    //#[ operation getCount()
    int count = 0;
    ifstream file;
    file.open(TACHO);
    if(!file.eof())
    {
    	file >> count;
    }
    file.close();
    return count;
    //#]
}

Tacho::control_C* Tacho::getControl() const {
    return control;
}

Tacho::control_C* Tacho::get_control() const {
    return control;
}

Tacho::control_C* Tacho::newControl() {
    control = new Tacho::control_C;
    return control;
}

void Tacho::deleteControl() {
    delete control;
    control = NULL;
}

int Tacho::getInterval() const {
    return interval;
}

void Tacho::setInterval(int p_interval) {
    interval = p_interval;
}

bool Tacho::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Tacho::initRelations() {
    control = newControl();
    if(get_control())
       get_control()->connectTacho(this);
}

void Tacho::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Running_timeout = NULL;
}

void Tacho::cleanUpRelations() {
    {
        deleteControl();
    }
}

void Tacho::cancelTimeouts() {
    if(Running_timeout != NULL)
        {
            Running_timeout->cancel();
            Running_timeout = NULL;
        }
}

bool Tacho::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Running_timeout == arg)
        {
            Running_timeout = NULL;
            res = true;
        }
    return res;
}

void Tacho::rootState_entDef() {
    {
        //#[ transition 3 
        getCount();
        //#]
        rootState_subState = Idle;
        rootState_active = Idle;
    }
}

IOxfReactive::TakeEventStatus Tacho::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evStartTacho_DesignTacho_id))
                {
                    rootState_subState = Running;
                    rootState_active = Running;
                    //#[ state ROOT.Running.(Entry) 
                    OUT_PORT(control)->GEN(evCount(getCount()));
                    //#]
                    Running_timeout = scheduleTimeout(interval, NULL);
                    res = eventConsumed;
                }
            
            break;
        }
        case Running:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Running_timeout)
                        {
                            if(Running_timeout != NULL)
                                {
                                    Running_timeout->cancel();
                                    Running_timeout = NULL;
                                }
                            rootState_subState = Running;
                            rootState_active = Running;
                            //#[ state ROOT.Running.(Entry) 
                            OUT_PORT(control)->GEN(evCount(getCount()));
                            //#]
                            Running_timeout = scheduleTimeout(interval, NULL);
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evStopTacho_DesignTacho_id))
                {
                    if(Running_timeout != NULL)
                        {
                            Running_timeout->cancel();
                            Running_timeout = NULL;
                        }
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    res = eventConsumed;
                }
            
            break;
        }
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: PhytecTest/DebugConfig/Tacho.cpp
*********************************************************************/
