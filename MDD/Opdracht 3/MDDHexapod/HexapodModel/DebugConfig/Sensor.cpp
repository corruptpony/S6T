/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Sensor
//!	Generated Date	: Fri, 21, Apr 2017  
	File Path	: HexapodModel/DebugConfig/Sensor.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Sensor.h"
//## package Design

//## class Sensor

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Sensor::b_C::InBound_C::InBound_C() {
    port = NULL;
}

Sensor::b_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

Sensor::b_C* Sensor::b_C::InBound_C::getPort() const {
    return port;
}

void Sensor::b_C::InBound_C::setPort(Sensor::b_C* p_b_C) {
    _setPort(p_b_C);
}

void Sensor::b_C::InBound_C::cleanUpRelations() {
    if(port != NULL)
        {
            port = NULL;
        }
}

void Sensor::b_C::InBound_C::__setPort(Sensor::b_C* p_b_C) {
    port = p_b_C;
}

void Sensor::b_C::InBound_C::_setPort(Sensor::b_C* p_b_C) {
    __setPort(p_b_C);
}

void Sensor::b_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Sensor::b_C::OutBound_C::OutBound_C() {
    itsISensorCB = NULL;
}

Sensor::b_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Sensor::b_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        if (itsISensorCB != NULL) {
            if (event->isTypeOf(evAlarm_Design_id)) {
                res = itsISensorCB->send(event, params);
                return res;
            }
            if (event->isTypeOf(evClear_Design_id)) {
                res = itsISensorCB->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Sensor::b_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        if (itsISensorCB != NULL) {
            if (event->isTypeOf(evAlarm_Design_id)) {
                res = itsISensorCB->send(event);
                return res;
            }
            if (event->isTypeOf(evClear_Design_id)) {
                res = itsISensorCB->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

OMReactive* Sensor::b_C::OutBound_C::getItsISensorCB() const {
    return itsISensorCB;
}

void Sensor::b_C::OutBound_C::setItsISensorCB(OMReactive* p_OMReactive) {
    itsISensorCB = p_OMReactive;
}

void Sensor::b_C::OutBound_C::cleanUpRelations() {
    if(itsISensorCB != NULL)
        {
            itsISensorCB = NULL;
        }
}

Sensor::b_C::b_C() {
    initRelations();
}

Sensor::b_C::~b_C() {
}

void Sensor::b_C::connectSensor(Sensor* part) {
    //#[ operation connectSensor(Sensor*)
    
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

ISensorCB* Sensor::b_C::getItsISensorCB() {
    //#[ operation getItsISensorCB()
    return &OutBound;
    //#]
}

void Sensor::b_C::setItsISensorCB(OMReactive* p_ISensorCB) {
    //#[ operation setItsISensorCB(OMReactive*)
    OutBound.setItsISensorCB(p_ISensorCB);
    //#]
}

Sensor::b_C::InBound_C* Sensor::b_C::getInBound() const {
    return (Sensor::b_C::InBound_C*) &InBound;
}

Sensor::b_C::OutBound_C* Sensor::b_C::getOutBound() const {
    return (Sensor::b_C::OutBound_C*) &OutBound;
}

void Sensor::b_C::initRelations() {
    InBound._setPort(this);
}

void Sensor::b_C::destroy() {
}
//#]

Sensor::Sensor(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
    //#[ operation Sensor()
    srand(time(NULL));
    //#]
}

Sensor::~Sensor() {
    cleanUpRelations();
    cancelTimeouts();
}

RhpBoolean Sensor::isAlarm() {
    //#[ operation isAlarm()
    return ( (rand()%100) < 10 );
    //#]
}

RhpBoolean Sensor::isClear() {
    //#[ operation isClear()
    return ( (rand()%100) < 10 );
    //#]
}

Sensor::b_C* Sensor::getB() const {
    return b;
}

Sensor::b_C* Sensor::get_b() const {
    return b;
}

Sensor::b_C* Sensor::newB() {
    b = new Sensor::b_C;
    return b;
}

void Sensor::deleteB() {
    delete b;
    b = NULL;
}

bool Sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Sensor::initRelations() {
    b = newB();
    if(get_b())
       get_b()->connectSensor(this);
}

void Sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    clear_timeout = NULL;
    alarm_timeout = NULL;
}

void Sensor::cleanUpRelations() {
    {
        deleteB();
    }
}

void Sensor::cancelTimeouts() {
    if(clear_timeout != NULL)
        {
            clear_timeout->cancel();
            clear_timeout = NULL;
        }
    if(alarm_timeout != NULL)
        {
            alarm_timeout->cancel();
            alarm_timeout = NULL;
        }
}

bool Sensor::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(clear_timeout == arg)
        {
            clear_timeout = NULL;
            res = true;
        }
    if(alarm_timeout == arg)
        {
            alarm_timeout = NULL;
            res = true;
        }
    return res;
}

void Sensor::rootState_entDef() {
    {
        pushNullTransition();
        rootState_subState = clear;
        rootState_active = clear;
        clear_timeout = scheduleTimeout(1000, NULL);
    }
}

void Sensor::rootState_exit() {
    switch (rootState_subState) {
        case clear:
        {
            popNullTransition();
            if(clear_timeout != NULL)
                {
                    clear_timeout->cancel();
                    clear_timeout = NULL;
                }
            break;
        }
        case sendaction_2:
        {
            popNullTransition();
            break;
        }
        case alarm:
        {
            popNullTransition();
            if(alarm_timeout != NULL)
                {
                    alarm_timeout->cancel();
                    alarm_timeout = NULL;
                }
            break;
        }
        case sendaction_6:
        {
            popNullTransition();
            break;
        }
        default:
            break;
    }
    rootState_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus Sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case clear:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == clear_timeout)
                        {
                            popNullTransition();
                            if(clear_timeout != NULL)
                                {
                                    clear_timeout->cancel();
                                    clear_timeout = NULL;
                                }
                            pushNullTransition();
                            rootState_subState = clear;
                            rootState_active = clear;
                            clear_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 2 
                    if(isAlarm())
                        {
                            popNullTransition();
                            if(clear_timeout != NULL)
                                {
                                    clear_timeout->cancel();
                                    clear_timeout = NULL;
                                }
                            pushNullTransition();
                            rootState_subState = sendaction_2;
                            rootState_active = sendaction_2;
                            //#[ state ROOT.sendaction_2.(Entry) 
                            OUT_PORT(b)->GEN(evAlarm);
                            //#]
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    //#[ transition 3 
                    cout << ">>>> Sensor Alarm >>>>" << endl;
                    //#]
                    pushNullTransition();
                    rootState_subState = alarm;
                    rootState_active = alarm;
                    alarm_timeout = scheduleTimeout(1000, NULL);
                    res = eventConsumed;
                }
            
            break;
        }
        case alarm:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == alarm_timeout)
                        {
                            popNullTransition();
                            if(alarm_timeout != NULL)
                                {
                                    alarm_timeout->cancel();
                                    alarm_timeout = NULL;
                                }
                            pushNullTransition();
                            rootState_subState = alarm;
                            rootState_active = alarm;
                            alarm_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 1 
                    if(isClear())
                        {
                            popNullTransition();
                            if(alarm_timeout != NULL)
                                {
                                    alarm_timeout->cancel();
                                    alarm_timeout = NULL;
                                }
                            pushNullTransition();
                            rootState_subState = sendaction_6;
                            rootState_active = sendaction_6;
                            //#[ state ROOT.sendaction_6.(Entry) 
                            OUT_PORT(b)->GEN(evClear);
                            //#]
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case sendaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    //#[ transition 4 
                    cout << "<<<< Sensor Clear <<<<" << endl;
                    //#]
                    pushNullTransition();
                    rootState_subState = clear;
                    rootState_active = clear;
                    clear_timeout = scheduleTimeout(1000, NULL);
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
	File Path	: HexapodModel/DebugConfig/Sensor.cpp
*********************************************************************/
