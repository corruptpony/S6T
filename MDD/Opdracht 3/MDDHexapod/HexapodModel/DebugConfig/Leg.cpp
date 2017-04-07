/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Leg
//!	Generated Date	: Fri, 7, Apr 2017  
	File Path	: HexapodModel/DebugConfig/Leg.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Leg.h"
//## package Design

//## class Leg

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Leg::b_C::InBound_C::InBound_C() {
    itsILeg = NULL;
    port = NULL;
}

Leg::b_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Leg::b_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsILeg != NULL) {
            if (event->isTypeOf(evFreeze_Design_id)) {
                res = itsILeg->send(event, params);
                return res;
            }
            if (event->isTypeOf(evContinue_Design_id)) {
                res = itsILeg->send(event, params);
                return res;
            }
            if (event->isTypeOf(evStiffen_Design_id)) {
                res = itsILeg->send(event, params);
                return res;
            }
            if (event->isTypeOf(evRelax_Design_id)) {
                res = itsILeg->send(event, params);
                return res;
            }
            if (event->isTypeOf(evMove_Design_id)) {
                res = itsILeg->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Leg::b_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsILeg != NULL) {
            if (event->isTypeOf(evFreeze_Design_id)) {
                res = itsILeg->send(event);
                return res;
            }
            if (event->isTypeOf(evContinue_Design_id)) {
                res = itsILeg->send(event);
                return res;
            }
            if (event->isTypeOf(evStiffen_Design_id)) {
                res = itsILeg->send(event);
                return res;
            }
            if (event->isTypeOf(evRelax_Design_id)) {
                res = itsILeg->send(event);
                return res;
            }
            if (event->isTypeOf(evMove_Design_id)) {
                res = itsILeg->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

ILeg* Leg::b_C::InBound_C::getItsILeg() const {
    return itsILeg;
}

void Leg::b_C::InBound_C::setItsILeg(ILeg* p_ILeg) {
    itsILeg = p_ILeg;
}

Leg::b_C* Leg::b_C::InBound_C::getPort() const {
    return port;
}

void Leg::b_C::InBound_C::setPort(Leg::b_C* p_b_C) {
    _setPort(p_b_C);
}

void Leg::b_C::InBound_C::cleanUpRelations() {
    if(itsILeg != NULL)
        {
            itsILeg = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Leg::b_C::InBound_C::__setPort(Leg::b_C* p_b_C) {
    port = p_b_C;
}

void Leg::b_C::InBound_C::_setPort(Leg::b_C* p_b_C) {
    __setPort(p_b_C);
}

void Leg::b_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Leg::b_C::OutBound_C::OutBound_C() {
    itsILegCB = NULL;
}

Leg::b_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Leg::b_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        if (itsILegCB != NULL) {
            if (event->isTypeOf(evReady_Design_id)) {
                res = itsILegCB->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Leg::b_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        if (itsILegCB != NULL) {
            if (event->isTypeOf(evReady_Design_id)) {
                res = itsILegCB->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

OMReactive* Leg::b_C::OutBound_C::getItsILegCB() const {
    return itsILegCB;
}

void Leg::b_C::OutBound_C::setItsILegCB(OMReactive* p_OMReactive) {
    itsILegCB = p_OMReactive;
}

void Leg::b_C::OutBound_C::cleanUpRelations() {
    if(itsILegCB != NULL)
        {
            itsILegCB = NULL;
        }
}

Leg::b_C::b_C() {
    initRelations();
}

Leg::b_C::~b_C() {
}

void Leg::b_C::connectLeg(Leg* part) {
    //#[ operation connectLeg(Leg*)
    InBound.setItsILeg(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

ILeg* Leg::b_C::getItsILeg() {
    //#[ operation getItsILeg()
    return &InBound;
    //#]
}

ILegCB* Leg::b_C::getItsILegCB() {
    //#[ operation getItsILegCB()
    return &OutBound;
    //#]
}

void Leg::b_C::setItsILeg(ILeg* p_ILeg) {
    //#[ operation setItsILeg(ILeg*)
    InBound.setItsILeg(p_ILeg);
    //#]
}

void Leg::b_C::setItsILegCB(OMReactive* p_ILegCB) {
    //#[ operation setItsILegCB(OMReactive*)
    OutBound.setItsILegCB(p_ILegCB);
    //#]
}

Leg::b_C::InBound_C* Leg::b_C::getInBound() const {
    return (Leg::b_C::InBound_C*) &InBound;
}

Leg::b_C::OutBound_C* Leg::b_C::getOutBound() const {
    return (Leg::b_C::OutBound_C*) &OutBound;
}

void Leg::b_C::initRelations() {
    InBound._setPort(this);
}

void Leg::b_C::destroy() {
}
//#]

Leg::Leg(int number, IOxfActive* theActiveContext) : number(number) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
    //#[ operation Leg(int)
    srand(time(NULL));
    cout << "Leg " << number << " initialized" << endl;
    //#]
}

Leg::Leg(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Leg::~Leg() {
    cleanUpRelations();
    cancelTimeouts();
}

int Leg::delay() {
    //#[ operation delay()
    return 1000+ rand()%500;
    //#]
}

Leg::b_C* Leg::getB() const {
    return b;
}

Leg::b_C* Leg::get_b() const {
    return b;
}

Leg::b_C* Leg::newB() {
    b = new Leg::b_C;
    return b;
}

void Leg::deleteB() {
    delete b;
    b = NULL;
}

int Leg::getNumber() const {
    return number;
}

void Leg::setNumber(int p_number) {
    number = p_number;
}

bool Leg::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Leg::initRelations() {
    b = newB();
    if(get_b())
       get_b()->connectLeg(this);
}

void Leg::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    stiffened_subState = OMNonState;
    stiffened_lastState = OMNonState;
    moving_timeout = NULL;
}

void Leg::cleanUpRelations() {
    {
        deleteB();
    }
}

void Leg::cancelTimeouts() {
    if(moving_timeout != NULL)
        {
            moving_timeout->cancel();
            moving_timeout = NULL;
        }
}

bool Leg::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(moving_timeout == arg)
        {
            moving_timeout = NULL;
            res = true;
        }
    return res;
}

void Leg::rootState_entDef() {
    {
        rootState_subState = relaxed;
        rootState_active = relaxed;
        //#[ state ROOT.relaxed.(Entry) 
        cout << "Leg " << number << " relaxed"  << endl;
        //#]
    }
}

IOxfReactive::TakeEventStatus Leg::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case relaxed:
        {
            if(IS_EVENT_TYPE_OF(evStiffen_Design_id))
                {
                    stiffened_entDef();
                    res = eventConsumed;
                }
            
            break;
        }
        case standing:
        {
            res = standing_handleEvent();
            break;
        }
        case moving:
        {
            res = moving_handleEvent();
            break;
        }
        case sendaction_2:
        {
            res = sendaction_2_handleEvent();
            break;
        }
        case frozen:
        {
            if(IS_EVENT_TYPE_OF(evContinue_Design_id))
                {
                    rootState_subState = stiffened;
                    stiffened_entHist();
                    res = eventConsumed;
                }
            
            break;
        }
        default:
            break;
    }
    return res;
}

void Leg::stiffened_entDef() {
    rootState_subState = stiffened;
    stiffened_subState = standing;
    rootState_active = standing;
    //#[ state ROOT.stiffened.standing.(Entry) 
    cout << "Leg " << number << " standing"  << endl;
    //#]
}

void Leg::stiffened_entHist() {
    if(stiffened_lastState != OMNonState)
        {
            stiffened_subState = stiffened_lastState;
            switch (stiffened_subState) {
                case standing:
                {
                    stiffened_subState = standing;
                    rootState_active = standing;
                    //#[ state ROOT.stiffened.standing.(Entry) 
                    cout << "Leg " << number << " standing"  << endl;
                    //#]
                    break;
                }
                case moving:
                {
                    stiffened_subState = moving;
                    rootState_active = moving;
                    //#[ state ROOT.stiffened.moving.(Entry) 
                    cout << "Leg " << number << " moving" << endl;
                    //#]
                    moving_timeout = scheduleTimeout(delay(), NULL);
                    break;
                }
                case sendaction_2:
                {
                    pushNullTransition();
                    stiffened_subState = sendaction_2;
                    rootState_active = sendaction_2;
                    //#[ state ROOT.stiffened.sendaction_2.(Entry) 
                    OUT_PORT(b)->GEN(evReady);
                    //#]
                    break;
                }
                default:
                    break;
            }
        }
    else
        {
            OMNotifier::notifyToOutput("\nInternal Error - No last state in history\n\n");
        }
}

IOxfReactive::TakeEventStatus Leg::stiffened_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evFreeze_Design_id))
        {
            stiffened_lastState = stiffened_subState;
            switch (stiffened_subState) {
                case standing:
                {
                    stiffened_lastState = standing;
                    break;
                }
                case moving:
                {
                    if(moving_timeout != NULL)
                        {
                            moving_timeout->cancel();
                            moving_timeout = NULL;
                        }
                    stiffened_lastState = moving;
                    break;
                }
                case sendaction_2:
                {
                    popNullTransition();
                    stiffened_lastState = sendaction_2;
                    break;
                }
                default:
                    break;
            }
            stiffened_subState = OMNonState;
            rootState_subState = frozen;
            rootState_active = frozen;
            //#[ state ROOT.frozen.(Entry) 
            cout << "Leg " << number << " frozen"  << endl;
            //#]
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evRelax_Design_id))
        {
            stiffened_lastState = stiffened_subState;
            switch (stiffened_subState) {
                case standing:
                {
                    stiffened_lastState = standing;
                    break;
                }
                case moving:
                {
                    if(moving_timeout != NULL)
                        {
                            moving_timeout->cancel();
                            moving_timeout = NULL;
                        }
                    stiffened_lastState = moving;
                    break;
                }
                case sendaction_2:
                {
                    popNullTransition();
                    stiffened_lastState = sendaction_2;
                    break;
                }
                default:
                    break;
            }
            stiffened_subState = OMNonState;
            rootState_subState = relaxed;
            rootState_active = relaxed;
            //#[ state ROOT.relaxed.(Entry) 
            cout << "Leg " << number << " relaxed"  << endl;
            //#]
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Leg::standing_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evMove_Design_id))
        {
            stiffened_subState = moving;
            rootState_active = moving;
            //#[ state ROOT.stiffened.moving.(Entry) 
            cout << "Leg " << number << " moving" << endl;
            //#]
            moving_timeout = scheduleTimeout(delay(), NULL);
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = stiffened_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Leg::sendaction_2_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            popNullTransition();
            stiffened_subState = standing;
            rootState_active = standing;
            //#[ state ROOT.stiffened.standing.(Entry) 
            cout << "Leg " << number << " standing"  << endl;
            //#]
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = stiffened_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Leg::moving_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == moving_timeout)
                {
                    if(moving_timeout != NULL)
                        {
                            moving_timeout->cancel();
                            moving_timeout = NULL;
                        }
                    pushNullTransition();
                    stiffened_subState = sendaction_2;
                    rootState_active = sendaction_2;
                    //#[ state ROOT.stiffened.sendaction_2.(Entry) 
                    OUT_PORT(b)->GEN(evReady);
                    //#]
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = stiffened_handleEvent();
        }
    return res;
}

/*********************************************************************
	File Path	: HexapodModel/DebugConfig/Leg.cpp
*********************************************************************/
