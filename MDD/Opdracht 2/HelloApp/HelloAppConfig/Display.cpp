/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: Display
//!	Generated Date	: Mon, 27, Mar 2017  
	File Path	: HelloApp/HelloAppConfig/Display.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Display.h"
//## event evPrint(int)
#include "Design.h"
//## package Analyse

//## class Display

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Display::ctl_C::InBound_C::InBound_C() {
    itsIDisplay = NULL;
    port = NULL;
}

Display::ctl_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Display::ctl_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIDisplay != NULL) {
            if (event->isTypeOf(evPrint_Design_id)) {
                res = itsIDisplay->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Display::ctl_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIDisplay != NULL) {
            if (event->isTypeOf(evPrint_Design_id)) {
                res = itsIDisplay->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

IDisplay* Display::ctl_C::InBound_C::getItsIDisplay() const {
    return itsIDisplay;
}

void Display::ctl_C::InBound_C::setItsIDisplay(IDisplay* p_IDisplay) {
    itsIDisplay = p_IDisplay;
}

Display::ctl_C* Display::ctl_C::InBound_C::getPort() const {
    return port;
}

void Display::ctl_C::InBound_C::setPort(Display::ctl_C* p_ctl_C) {
    _setPort(p_ctl_C);
}

void Display::ctl_C::InBound_C::cleanUpRelations() {
    if(itsIDisplay != NULL)
        {
            itsIDisplay = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Display::ctl_C::InBound_C::__setPort(Display::ctl_C* p_ctl_C) {
    port = p_ctl_C;
}

void Display::ctl_C::InBound_C::_setPort(Display::ctl_C* p_ctl_C) {
    __setPort(p_ctl_C);
}

void Display::ctl_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Display::ctl_C::OutBound_C::OutBound_C() {
    itsIControl = NULL;
}

Display::ctl_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Display::ctl_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        if (itsIControl != NULL) {
            if (event->isTypeOf(evDone_Design_id)) {
                res = itsIControl->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Display::ctl_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        if (itsIControl != NULL) {
            if (event->isTypeOf(evDone_Design_id)) {
                res = itsIControl->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

OMReactive* Display::ctl_C::OutBound_C::getItsIControl() const {
    return itsIControl;
}

void Display::ctl_C::OutBound_C::setItsIControl(OMReactive* p_OMReactive) {
    itsIControl = p_OMReactive;
}

void Display::ctl_C::OutBound_C::cleanUpRelations() {
    if(itsIControl != NULL)
        {
            itsIControl = NULL;
        }
}

Display::ctl_C::ctl_C() {
    initRelations();
}

Display::ctl_C::~ctl_C() {
}

void Display::ctl_C::connectDisplay(Display* part) {
    //#[ operation connectDisplay(Display*)
    InBound.setItsIDisplay(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

IControl* Display::ctl_C::getItsIControl() {
    //#[ operation getItsIControl()
    return &OutBound;
    //#]
}

IDisplay* Display::ctl_C::getItsIDisplay() {
    //#[ operation getItsIDisplay()
    return &InBound;
    //#]
}

void Display::ctl_C::setItsIControl(OMReactive* p_IControl) {
    //#[ operation setItsIControl(OMReactive*)
    OutBound.setItsIControl(p_IControl);
    //#]
}

void Display::ctl_C::setItsIDisplay(IDisplay* p_IDisplay) {
    //#[ operation setItsIDisplay(IDisplay*)
    InBound.setItsIDisplay(p_IDisplay);
    //#]
}

Display::ctl_C::InBound_C* Display::ctl_C::getInBound() const {
    return (Display::ctl_C::InBound_C*) &InBound;
}

Display::ctl_C::OutBound_C* Display::ctl_C::getOutBound() const {
    return (Display::ctl_C::OutBound_C*) &OutBound;
}

void Display::ctl_C::initRelations() {
    InBound._setPort(this);
}

void Display::ctl_C::destroy() {
}
//#]

Display::~Display() {
    cleanUpRelations();
    cancelTimeouts();
}

void Display::print(const RhpString& message) {
    //#[ operation print(RhpString)
    cout << name << " says: " <<  message  << endl;
    //#]
}

RhpString Display::getName() const {
    return name;
}

void Display::setName(RhpString p_name) {
    name = p_name;
}

Display::Display(const RhpString& itsname, IOxfActive* theActiveContext) : seqNr(0), name(itsname) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
    //#[ operation Display(RhpString)
    print("Hello World");
    //#]
}

bool Display::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Display::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    stateWorld_timeout = NULL;
    stateHello_timeout = NULL;
}

void Display::cancelTimeouts() {
    if(stateWorld_timeout != NULL)
        {
            stateWorld_timeout->cancel();
            stateWorld_timeout = NULL;
        }
    if(stateHello_timeout != NULL)
        {
            stateHello_timeout->cancel();
            stateHello_timeout = NULL;
        }
}

bool Display::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(stateWorld_timeout == arg)
        {
            stateWorld_timeout = NULL;
            res = true;
        }
    if(stateHello_timeout == arg)
        {
            stateHello_timeout = NULL;
            res = true;
        }
    return res;
}

Display::Display(IOxfActive* theActiveContext) : seqNr(0) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Display::ctl_C* Display::getCtl() const {
    return ctl;
}

Display::ctl_C* Display::get_ctl() const {
    return ctl;
}

Display::ctl_C* Display::newCtl() {
    ctl = new Display::ctl_C;
    return ctl;
}

void Display::deleteCtl() {
    delete ctl;
    ctl = NULL;
}

int Display::getSeqNr() const {
    return seqNr;
}

void Display::setSeqNr(int p_seqNr) {
    seqNr = p_seqNr;
}

void Display::initRelations() {
    ctl = newCtl();
    if(get_ctl())
       get_ctl()->connectDisplay(this);
}

void Display::cleanUpRelations() {
    {
        deleteCtl();
    }
}

void Display::rootState_entDef() {
    {
        rootState_subState = stateWaitForEvent;
        rootState_active = stateWaitForEvent;
    }
}

IOxfReactive::TakeEventStatus Display::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case stateHello:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == stateHello_timeout)
                        {
                            if(stateHello_timeout != NULL)
                                {
                                    stateHello_timeout->cancel();
                                    stateHello_timeout = NULL;
                                }
                            rootState_subState = stateWorld;
                            rootState_active = stateWorld;
                            //#[ state ROOT.stateWorld.(Entry) 
                            cout << name << " says: World " << seqNr << endl;
                            //#]
                            stateWorld_timeout = scheduleTimeout(10, NULL);
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case stateWorld:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == stateWorld_timeout)
                        {
                            if(stateWorld_timeout != NULL)
                                {
                                    stateWorld_timeout->cancel();
                                    stateWorld_timeout = NULL;
                                }
                            //#[ state ROOT.stateWorld.(Exit) 
                            OUT_PORT(ctl)->GEN(evDone);
                            //#]
                            rootState_subState = stateWaitForEvent;
                            rootState_active = stateWaitForEvent;
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case stateWaitForEvent:
        {
            if(IS_EVENT_TYPE_OF(evPrint_Design_id))
                {
                    OMSETPARAMS(evPrint);
                    //#[ transition 2 
                    seqNr = params->seqnr;
                    //#]
                    rootState_subState = stateHello;
                    rootState_active = stateHello;
                    //#[ state ROOT.stateHello.(Entry) 
                    cout << name << " says: Hello " << seqNr << endl;
                    //#]
                    stateHello_timeout = scheduleTimeout(1000, NULL);
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
	File Path	: HelloApp/HelloAppConfig/Display.cpp
*********************************************************************/
