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

Display::~Display() {
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

Display::Display(IOxfActive* theActiveContext) : count(1), name("Dominic") {
    setActiveContext(theActiveContext, false);
    initStatechart();
    //#[ operation Display()
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
