/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: Controller
//!	Generated Date	: Mon, 6, Mar 2017  
	File Path	: HelloApp/HelloAppConfig/Controller.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Controller.h"
// for IS_PORT macro support

//## package Design

//## class Controller

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Controller::dsp1_C::InBound_C::InBound_C() {
    itsIControl = NULL;
    port = NULL;
}

Controller::dsp1_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

IControl* Controller::dsp1_C::InBound_C::getItsIControl() const {
    return itsIControl;
}

void Controller::dsp1_C::InBound_C::setItsIControl(IControl* p_IControl) {
    itsIControl = p_IControl;
}

Controller::dsp1_C* Controller::dsp1_C::InBound_C::getPort() const {
    return port;
}

void Controller::dsp1_C::InBound_C::setPort(Controller::dsp1_C* p_dsp1_C) {
    _setPort(p_dsp1_C);
}

void Controller::dsp1_C::InBound_C::cleanUpRelations() {
    if(itsIControl != NULL)
        {
            itsIControl = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::dsp1_C::InBound_C::__setPort(Controller::dsp1_C* p_dsp1_C) {
    port = p_dsp1_C;
}

void Controller::dsp1_C::InBound_C::_setPort(Controller::dsp1_C* p_dsp1_C) {
    __setPort(p_dsp1_C);
}

void Controller::dsp1_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::dsp1_C::OutBound_C::OutBound_C() {
    itsIDisplay = NULL;
}

Controller::dsp1_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

IDisplay* Controller::dsp1_C::OutBound_C::getItsIDisplay() const {
    return itsIDisplay;
}

void Controller::dsp1_C::OutBound_C::setItsIDisplay(IDisplay* p_IDisplay) {
    itsIDisplay = p_IDisplay;
}

void Controller::dsp1_C::OutBound_C::cleanUpRelations() {
    if(itsIDisplay != NULL)
        {
            itsIDisplay = NULL;
        }
}

Controller::dsp1_C::dsp1_C() {
    initRelations();
}

Controller::dsp1_C::~dsp1_C() {
}

void Controller::dsp1_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    InBound.setItsIControl(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

IControl* Controller::dsp1_C::getItsIControl() {
    //#[ operation getItsIControl()
    return &InBound;
    //#]
}

IDisplay* Controller::dsp1_C::getItsIDisplay() {
    //#[ operation getItsIDisplay()
    return &OutBound;
    //#]
}

void Controller::dsp1_C::setItsIControl(IControl* p_IControl) {
    //#[ operation setItsIControl(IControl*)
    InBound.setItsIControl(p_IControl);
    //#]
}

void Controller::dsp1_C::setItsIDisplay(IDisplay* p_IDisplay) {
    //#[ operation setItsIDisplay(IDisplay*)
    OutBound.setItsIDisplay(p_IDisplay);
    //#]
}

Controller::dsp1_C::InBound_C* Controller::dsp1_C::getInBound() const {
    return (Controller::dsp1_C::InBound_C*) &InBound;
}

Controller::dsp1_C::OutBound_C* Controller::dsp1_C::getOutBound() const {
    return (Controller::dsp1_C::OutBound_C*) &OutBound;
}

void Controller::dsp1_C::initRelations() {
    InBound._setPort(this);
}


using namespace std;


using namespace std;

Controller::dsp2_C::InBound_C::InBound_C() {
    itsIControl = NULL;
    port = NULL;
}

Controller::dsp2_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

IControl* Controller::dsp2_C::InBound_C::getItsIControl() const {
    return itsIControl;
}

void Controller::dsp2_C::InBound_C::setItsIControl(IControl* p_IControl) {
    itsIControl = p_IControl;
}

Controller::dsp2_C* Controller::dsp2_C::InBound_C::getPort() const {
    return port;
}

void Controller::dsp2_C::InBound_C::setPort(Controller::dsp2_C* p_dsp2_C) {
    _setPort(p_dsp2_C);
}

void Controller::dsp2_C::InBound_C::cleanUpRelations() {
    if(itsIControl != NULL)
        {
            itsIControl = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::dsp2_C::InBound_C::__setPort(Controller::dsp2_C* p_dsp2_C) {
    port = p_dsp2_C;
}

void Controller::dsp2_C::InBound_C::_setPort(Controller::dsp2_C* p_dsp2_C) {
    __setPort(p_dsp2_C);
}

void Controller::dsp2_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::dsp2_C::OutBound_C::OutBound_C() {
    itsIDisplay = NULL;
}

Controller::dsp2_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

IDisplay* Controller::dsp2_C::OutBound_C::getItsIDisplay() const {
    return itsIDisplay;
}

void Controller::dsp2_C::OutBound_C::setItsIDisplay(IDisplay* p_IDisplay) {
    itsIDisplay = p_IDisplay;
}

void Controller::dsp2_C::OutBound_C::cleanUpRelations() {
    if(itsIDisplay != NULL)
        {
            itsIDisplay = NULL;
        }
}

Controller::dsp2_C::dsp2_C() {
    initRelations();
}

Controller::dsp2_C::~dsp2_C() {
}

void Controller::dsp2_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    InBound.setItsIControl(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

IControl* Controller::dsp2_C::getItsIControl() {
    //#[ operation getItsIControl()
    return &InBound;
    //#]
}

IDisplay* Controller::dsp2_C::getItsIDisplay() {
    //#[ operation getItsIDisplay()
    return &OutBound;
    //#]
}

void Controller::dsp2_C::setItsIControl(IControl* p_IControl) {
    //#[ operation setItsIControl(IControl*)
    InBound.setItsIControl(p_IControl);
    //#]
}

void Controller::dsp2_C::setItsIDisplay(IDisplay* p_IDisplay) {
    //#[ operation setItsIDisplay(IDisplay*)
    OutBound.setItsIDisplay(p_IDisplay);
    //#]
}

Controller::dsp2_C::InBound_C* Controller::dsp2_C::getInBound() const {
    return (Controller::dsp2_C::InBound_C*) &InBound;
}

Controller::dsp2_C::OutBound_C* Controller::dsp2_C::getOutBound() const {
    return (Controller::dsp2_C::OutBound_C*) &OutBound;
}

void Controller::dsp2_C::initRelations() {
    InBound._setPort(this);
}
//#]

Controller::Controller(IOxfActive* theActiveContext) : count(1) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Controller::~Controller() {
    cleanUpRelations();
    cancelTimeouts();
}

void Controller::Display() {
    //#[ operation Display()
    //#]
}

Controller::dsp1_C* Controller::getDsp1() const {
    return dsp1;
}

Controller::dsp1_C* Controller::get_dsp1() const {
    return dsp1;
}

Controller::dsp1_C* Controller::newDsp1() {
    dsp1 = new Controller::dsp1_C;
    return dsp1;
}

void Controller::deleteDsp1() {
    delete dsp1;
    dsp1 = NULL;
}

Controller::dsp2_C* Controller::getDsp2() const {
    return dsp2;
}

Controller::dsp2_C* Controller::get_dsp2() const {
    return dsp2;
}

Controller::dsp2_C* Controller::newDsp2() {
    dsp2 = new Controller::dsp2_C;
    return dsp2;
}

void Controller::deleteDsp2() {
    delete dsp2;
    dsp2 = NULL;
}

int Controller::getCount() const {
    return count;
}

void Controller::setCount(int p_count) {
    count = p_count;
}

bool Controller::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Controller::initRelations() {
    dsp1 = newDsp1();
    dsp2 = newDsp2();
    if(get_dsp1())
       get_dsp1()->connectController(this);
    if(get_dsp2())
       get_dsp2()->connectController(this);
}

void Controller::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    stateDisplay_subState = OMNonState;
    stateDisplay_timeout = NULL;
}

void Controller::cleanUpRelations() {
    {
        deleteDsp2();
    }
    {
        deleteDsp1();
    }
}

void Controller::cancelTimeouts() {
    if(stateDisplay_timeout != NULL)
        {
            stateDisplay_timeout->cancel();
            stateDisplay_timeout = NULL;
        }
}

bool Controller::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(stateDisplay_timeout == arg)
        {
            stateDisplay_timeout = NULL;
            res = true;
        }
    return res;
}

void Controller::rootState_entDef() {
    {
        stateDisplay_entDef();
    }
}

IOxfReactive::TakeEventStatus Controller::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case sendaction_3:
        {
            res = stateDisplay_handleEvent();
            break;
        }
        
        default:
            break;
    }
    return res;
}

void Controller::stateDisplay_entDef() {
    pushNullTransition();
    rootState_subState = stateDisplay;
    stateDisplay_timeout = scheduleTimeout(2000, NULL);
    stateDisplay_subState = sendaction_3;
    rootState_active = sendaction_3;
    //#[ state ROOT.stateDisplay.sendaction_3.(Entry) 
    OUT_PORT(dsp1)->GEN(evPrint(count));
    //#]
}

void Controller::stateDisplay_exit() {
    popNullTransition();
    stateDisplay_subState = OMNonState;
    if(stateDisplay_timeout != NULL)
        {
            stateDisplay_timeout->cancel();
            stateDisplay_timeout = NULL;
        }
    //#[ state ROOT.stateDisplay.(Exit) 
    count++;
    //#]
}

IOxfReactive::TakeEventStatus Controller::stateDisplay_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == stateDisplay_timeout)
                {
                    stateDisplay_exit();
                    stateDisplay_entDef();
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 2 
            if(count > 5)
                {
                    stateDisplay_exit();
                    rootState_subState = state_2;
                    rootState_active = state_2;
                    res = eventConsumed;
                }
        }
    
    return res;
}

/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/Controller.cpp
*********************************************************************/
