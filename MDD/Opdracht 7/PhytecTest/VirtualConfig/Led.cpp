/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: Led
//!	Generated Date	: Mon, 12, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/Led.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Led.h"
//## package Design

//## class Led

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Led::control_C::InBound_C::InBound_C() {
    itsILed = NULL;
    port = NULL;
}

Led::control_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Led::control_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsILed != NULL) {
            if (event->isTypeOf(evOn_Design_id)) {
                res = itsILed->send(event, params);
                return res;
            }
            if (event->isTypeOf(evOff_Design_id)) {
                res = itsILed->send(event, params);
                return res;
            }
            if (event->isTypeOf(evBlinkOn_Design_id)) {
                res = itsILed->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Led::control_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsILed != NULL) {
            if (event->isTypeOf(evOn_Design_id)) {
                res = itsILed->send(event);
                return res;
            }
            if (event->isTypeOf(evOff_Design_id)) {
                res = itsILed->send(event);
                return res;
            }
            if (event->isTypeOf(evBlinkOn_Design_id)) {
                res = itsILed->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

iLed* Led::control_C::InBound_C::getItsILed() const {
    return itsILed;
}

void Led::control_C::InBound_C::setItsILed(iLed* p_iLed) {
    itsILed = p_iLed;
}

Led::control_C* Led::control_C::InBound_C::getPort() const {
    return port;
}

void Led::control_C::InBound_C::setPort(Led::control_C* p_control_C) {
    _setPort(p_control_C);
}

void Led::control_C::InBound_C::cleanUpRelations() {
    if(itsILed != NULL)
        {
            itsILed = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Led::control_C::InBound_C::__setPort(Led::control_C* p_control_C) {
    port = p_control_C;
}

void Led::control_C::InBound_C::_setPort(Led::control_C* p_control_C) {
    __setPort(p_control_C);
}

void Led::control_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Led::control_C::OutBound_C::OutBound_C() {
}

Led::control_C::OutBound_C::~OutBound_C() {
}

Led::control_C::control_C() {
    initRelations();
}

Led::control_C::~control_C() {
}

void Led::control_C::connectLed(Led* part) {
    //#[ operation connectLed(Led*)
    InBound.setItsILed(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iLed* Led::control_C::getItsILed() {
    //#[ operation getItsILed()
    return &InBound;
    //#]
}

void Led::control_C::setItsILed(iLed* p_iLed) {
    //#[ operation setItsILed(iLed*)
    InBound.setItsILed(p_iLed);
    //#]
}

Led::control_C::InBound_C* Led::control_C::getInBound() const {
    return (Led::control_C::InBound_C*) &InBound;
}

Led::control_C::OutBound_C* Led::control_C::getOutBound() const {
    return (Led::control_C::OutBound_C*) &OutBound;
}

void Led::control_C::initRelations() {
    InBound._setPort(this);
}

void Led::control_C::destroy() {
}
//#]

Led::Led(const RhpString& ledName, const RhpString& enable, IOxfActive* theActiveContext) : blinkBool(false), interval(500), ledName(ledName), enable(enable) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
    //#[ operation Led(RhpString,RhpString)
    //#]
}

Led::Led(IOxfActive* theActiveContext) : blinkBool(false), interval(500) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Led::~Led() {
    cleanUpRelations();
    cancelTimeouts();
}

void Led::init() {
    //#[ operation init()
    ofstream file;
    file.open(GPIO_MAP);
    file << enable << endl;
    file.close();
    //#]
}

void Led::ledOff() {
    //#[ operation ledOff()
    ofstream file;
    file.open(ledName);
    file << 0;
    file.close();
    //#]
}

void Led::ledOn() {
    //#[ operation ledOn()
    ofstream file;
    file.open(ledName);
    file << 1;
    file.close();
    //#]
}

Led::control_C* Led::getControl() const {
    return control;
}

Led::control_C* Led::get_control() const {
    return control;
}

Led::control_C* Led::newControl() {
    control = new Led::control_C;
    return control;
}

void Led::deleteControl() {
    delete control;
    control = NULL;
}

bool Led::getBlinkBool() const {
    return blinkBool;
}

void Led::setBlinkBool(bool p_blinkBool) {
    blinkBool = p_blinkBool;
}

RhpString Led::getEnable() const {
    return enable;
}

void Led::setEnable(RhpString p_enable) {
    enable = p_enable;
}

int Led::getInterval() const {
    return interval;
}

void Led::setInterval(int p_interval) {
    interval = p_interval;
}

RhpString Led::getLedName() const {
    return ledName;
}

void Led::setLedName(RhpString p_ledName) {
    ledName = p_ledName;
}

bool Led::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Led::initRelations() {
    control = newControl();
    if(get_control())
       get_control()->connectLed(this);
}

void Led::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Blink_timeout = NULL;
}

void Led::cleanUpRelations() {
    {
        deleteControl();
    }
}

void Led::cancelTimeouts() {
    if(Blink_timeout != NULL)
        {
            Blink_timeout->cancel();
            Blink_timeout = NULL;
        }
}

bool Led::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Blink_timeout == arg)
        {
            Blink_timeout = NULL;
            res = true;
        }
    return res;
}

void Led::rootState_entDef() {
    {
        //#[ transition 0 
        init();
        //#]
        rootState_subState = Off;
        rootState_active = Off;
        //#[ state ROOT.Off.(Entry) 
        ledOff();
        //#]
    }
}

IOxfReactive::TakeEventStatus Led::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Off:
        {
            if(IS_EVENT_TYPE_OF(evBlinkOn_Design_id))
                {
                    rootState_subState = Blink;
                    rootState_active = Blink;
                    //#[ state ROOT.Blink.(Entry) 
                    if(blinkBool)
                    {
                    ledOn();
                    }
                    else
                    {
                    ledOff();
                    }
                    
                    blinkBool = !blinkBool;
                    //#]
                    Blink_timeout = scheduleTimeout(interval, NULL);
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evOn_Design_id))
                {
                    rootState_subState = On;
                    rootState_active = On;
                    //#[ state ROOT.On.(Entry) 
                    ledOn();
                    //#]
                    res = eventConsumed;
                }
            
            break;
        }
        case Blink:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Blink_timeout)
                        {
                            if(Blink_timeout != NULL)
                                {
                                    Blink_timeout->cancel();
                                    Blink_timeout = NULL;
                                }
                            rootState_subState = Blink;
                            rootState_active = Blink;
                            //#[ state ROOT.Blink.(Entry) 
                            if(blinkBool)
                            {
                            ledOn();
                            }
                            else
                            {
                            ledOff();
                            }
                            
                            blinkBool = !blinkBool;
                            //#]
                            Blink_timeout = scheduleTimeout(interval, NULL);
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evOff_Design_id))
                {
                    if(Blink_timeout != NULL)
                        {
                            Blink_timeout->cancel();
                            Blink_timeout = NULL;
                        }
                    rootState_subState = Off;
                    rootState_active = Off;
                    //#[ state ROOT.Off.(Entry) 
                    ledOff();
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evOn_Design_id))
                {
                    if(Blink_timeout != NULL)
                        {
                            Blink_timeout->cancel();
                            Blink_timeout = NULL;
                        }
                    rootState_subState = On;
                    rootState_active = On;
                    //#[ state ROOT.On.(Entry) 
                    ledOn();
                    //#]
                    res = eventConsumed;
                }
            
            break;
        }
        case On:
        {
            if(IS_EVENT_TYPE_OF(evOff_Design_id))
                {
                    rootState_subState = Off;
                    rootState_active = Off;
                    //#[ state ROOT.Off.(Entry) 
                    ledOff();
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evBlinkOn_Design_id))
                {
                    rootState_subState = Blink;
                    rootState_active = Blink;
                    //#[ state ROOT.Blink.(Entry) 
                    if(blinkBool)
                    {
                    ledOn();
                    }
                    else
                    {
                    ledOff();
                    }
                    
                    blinkBool = !blinkBool;
                    //#]
                    Blink_timeout = scheduleTimeout(interval, NULL);
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
	File Path	: PhytecTest/VirtualConfig/Led.cpp
*********************************************************************/
