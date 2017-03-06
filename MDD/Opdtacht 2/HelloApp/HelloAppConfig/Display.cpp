/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: Display
//!	Generated Date	: Tue, 14, Feb 2017  
	File Path	: HelloApp/HelloAppConfig/Display.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Display.h"
//## package Analyse

//## class Display

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Display::ctl_C::InBound_C::InBound_C() {
    itsIDisplay = NULL;
}

Display::ctl_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

IDisplay* Display::ctl_C::InBound_C::getItsIDisplay() const {
    return itsIDisplay;
}

void Display::ctl_C::InBound_C::setItsIDisplay(IDisplay* p_IDisplay) {
    itsIDisplay = p_IDisplay;
}

void Display::ctl_C::InBound_C::cleanUpRelations() {
    if(itsIDisplay != NULL)
        {
            itsIDisplay = NULL;
        }
}


using namespace std;

Display::ctl_C::OutBound_C::OutBound_C() {
    itsIControl = NULL;
}

Display::ctl_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

IControl* Display::ctl_C::OutBound_C::getItsIControl() const {
    return itsIControl;
}

void Display::ctl_C::OutBound_C::setItsIControl(IControl* p_IControl) {
    itsIControl = p_IControl;
}

void Display::ctl_C::OutBound_C::cleanUpRelations() {
    if(itsIControl != NULL)
        {
            itsIControl = NULL;
        }
}

Display::ctl_C::ctl_C() {
}

Display::ctl_C::~ctl_C() {
}

void Display::ctl_C::connectDisplay(Display* part) {
    //#[ operation connectDisplay(Display*)
    
    
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

void Display::ctl_C::setItsIControl(IControl* p_IControl) {
    //#[ operation setItsIControl(IControl*)
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

Display::Display(const RhpString& itsname, IOxfActive* theActiveContext) : count(1), name(itsname) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
    //#[ operation Display(RhpString)
    print("Hello World");
    //#]
}

bool Display::AmIDone() {
    //#[ operation AmIDone()
                  if(count > 5){
                  	return true;
                  }
                  else{
                  	return false;
                  }
    //#]
}

int Display::getCount() const {
    return count;
}

void Display::setCount(int p_count) {
    count = p_count;
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

Display::Display(IOxfActive* theActiveContext) : count(1) {
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
        rootState_subState = stateHello;
        rootState_active = stateHello;
        //#[ state ROOT.stateHello.(Entry) 
        cout << name << " says: Hello " << endl;
        //#]
        stateHello_timeout = scheduleTimeout(1000, NULL);
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
                            pushNullTransition();
                            rootState_subState = stateWorld;
                            rootState_active = stateWorld;
                            //#[ state ROOT.stateWorld.(Entry) 
                            cout << name << " says: World" << endl;
                            count++;
                            //#]
                            stateWorld_timeout = scheduleTimeout(1000, NULL);
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
                            //## transition 3 
                            if(!AmIDone())
                                {
                                    popNullTransition();
                                    if(stateWorld_timeout != NULL)
                                        {
                                            stateWorld_timeout->cancel();
                                            stateWorld_timeout = NULL;
                                        }
                                    rootState_subState = stateHello;
                                    rootState_active = stateHello;
                                    //#[ state ROOT.stateHello.(Entry) 
                                    cout << name << " says: Hello " << endl;
                                    //#]
                                    stateHello_timeout = scheduleTimeout(1000, NULL);
                                    res = eventConsumed;
                                }
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 2 
                    if(AmIDone())
                        {
                            popNullTransition();
                            if(stateWorld_timeout != NULL)
                                {
                                    stateWorld_timeout->cancel();
                                    stateWorld_timeout = NULL;
                                }
                            rootState_subState = state_2;
                            rootState_active = state_2;
                            res = eventConsumed;
                        }
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
