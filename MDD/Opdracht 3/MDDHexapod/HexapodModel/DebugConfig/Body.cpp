/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Body
//!	Generated Date	: Tue, 11, Apr 2017  
	File Path	: HexapodModel/DebugConfig/Body.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Body.h"
//## package Design

//## class Body

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Body::UberPort_C::InBound_C::InBound_C() {
    itsILeg = NULL;
    port = NULL;
}

Body::UberPort_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Body::UberPort_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
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

bool Body::UberPort_C::InBound_C::send(IOxfEvent* event) {
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

ILeg* Body::UberPort_C::InBound_C::getItsILeg() const {
    return itsILeg;
}

void Body::UberPort_C::InBound_C::setItsILeg(ILeg* p_ILeg) {
    itsILeg = p_ILeg;
}

Body::UberPort_C* Body::UberPort_C::InBound_C::getPort() const {
    return port;
}

void Body::UberPort_C::InBound_C::setPort(Body::UberPort_C* p_UberPort_C) {
    _setPort(p_UberPort_C);
}

void Body::UberPort_C::InBound_C::cleanUpRelations() {
    if(itsILeg != NULL)
        {
            itsILeg = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Body::UberPort_C::InBound_C::__setPort(Body::UberPort_C* p_UberPort_C) {
    port = p_UberPort_C;
}

void Body::UberPort_C::InBound_C::_setPort(Body::UberPort_C* p_UberPort_C) {
    __setPort(p_UberPort_C);
}

void Body::UberPort_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Body::UberPort_C::OutBound_C::OutBound_C() {
    itsILegCB = NULL;
}

Body::UberPort_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Body::UberPort_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
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

bool Body::UberPort_C::OutBound_C::send(IOxfEvent* event) {
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

OMReactive* Body::UberPort_C::OutBound_C::getItsILegCB() const {
    return itsILegCB;
}

void Body::UberPort_C::OutBound_C::setItsILegCB(OMReactive* p_OMReactive) {
    itsILegCB = p_OMReactive;
}

void Body::UberPort_C::OutBound_C::cleanUpRelations() {
    if(itsILegCB != NULL)
        {
            itsILegCB = NULL;
        }
}

Body::UberPort_C::UberPort_C() {
    initRelations();
}

Body::UberPort_C::~UberPort_C() {
}

void Body::UberPort_C::connectBody(Body* part) {
    //#[ operation connectBody(Body*)
    InBound.setItsILeg(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

ILeg* Body::UberPort_C::getItsILeg() {
    //#[ operation getItsILeg()
    return &InBound;
    //#]
}

ILegCB* Body::UberPort_C::getItsILegCB() {
    //#[ operation getItsILegCB()
    return &OutBound;
    //#]
}

void Body::UberPort_C::setItsILeg(ILeg* p_ILeg) {
    //#[ operation setItsILeg(ILeg*)
    InBound.setItsILeg(p_ILeg);
    //#]
}

void Body::UberPort_C::setItsILegCB(OMReactive* p_ILegCB) {
    //#[ operation setItsILegCB(OMReactive*)
    OutBound.setItsILegCB(p_ILegCB);
    //#]
}

Body::UberPort_C::InBound_C* Body::UberPort_C::getInBound() const {
    return (Body::UberPort_C::InBound_C*) &InBound;
}

Body::UberPort_C::OutBound_C* Body::UberPort_C::getOutBound() const {
    return (Body::UberPort_C::OutBound_C*) &OutBound;
}

void Body::UberPort_C::initRelations() {
    InBound._setPort(this);
}

void Body::UberPort_C::destroy() {
}
//#]

Body::Body(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Body::~Body() {
    cleanUpRelations();
    cancelTimeouts();
}

Body::UberPort_C* Body::getUberPort() const {
    return UberPort;
}

Body::UberPort_C* Body::get_UberPort() const {
    return UberPort;
}

Body::UberPort_C* Body::newUberPort() {
    UberPort = new Body::UberPort_C;
    return UberPort;
}

void Body::deleteUberPort() {
    delete UberPort;
    UberPort = NULL;
}

bool Body::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Body::initRelations() {
    UberPort = newUberPort();
    if(get_UberPort())
       get_UberPort()->connectBody(this);
}

void Body::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Resting_timeout = NULL;
    Moving_timeout = NULL;
}

void Body::cleanUpRelations() {
    {
        deleteUberPort();
    }
}

void Body::cancelTimeouts() {
    if(Resting_timeout != NULL)
        {
            Resting_timeout->cancel();
            Resting_timeout = NULL;
        }
    if(Moving_timeout != NULL)
        {
            Moving_timeout->cancel();
            Moving_timeout = NULL;
        }
}

bool Body::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Resting_timeout == arg)
        {
            Resting_timeout = NULL;
            res = true;
        }
    if(Moving_timeout == arg)
        {
            Moving_timeout = NULL;
            res = true;
        }
    return res;
}

void Body::rootState_entDef() {
    {
        rootState_subState = Resting;
        rootState_active = Resting;
        //#[ state ROOT.Resting.(Entry) 
        cout << "Resting" << endl;
        //#]
        Resting_timeout = scheduleTimeout(5000, NULL);
    }
}

void Body::rootState_exit() {
    switch (rootState_subState) {
        case Resting:
        {
            if(Resting_timeout != NULL)
                {
                    Resting_timeout->cancel();
                    Resting_timeout = NULL;
                }
            break;
        }
        case Moving:
        {
            if(Moving_timeout != NULL)
                {
                    Moving_timeout->cancel();
                    Moving_timeout = NULL;
                }
            break;
        }
        case sendaction_2:
        {
            popNullTransition();
            break;
        }
        case sendaction_3:
        {
            popNullTransition();
            break;
        }
        default:
            break;
    }
    rootState_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus Body::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Resting:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Resting_timeout)
                        {
                            if(Resting_timeout != NULL)
                                {
                                    Resting_timeout->cancel();
                                    Resting_timeout = NULL;
                                }
                            pushNullTransition();
                            rootState_subState = sendaction_3;
                            rootState_active = sendaction_3;
                            //#[ state ROOT.sendaction_3.(Entry) 
                            OUT_PORT(UberPort)->GEN(evStiffen);
                            //#]
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case Moving:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Moving_timeout)
                        {
                            if(Moving_timeout != NULL)
                                {
                                    Moving_timeout->cancel();
                                    Moving_timeout = NULL;
                                }
                            pushNullTransition();
                            rootState_subState = sendaction_2;
                            rootState_active = sendaction_2;
                            //#[ state ROOT.sendaction_2.(Entry) 
                            GEN(evRelax);
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
                    rootState_subState = Resting;
                    rootState_active = Resting;
                    //#[ state ROOT.Resting.(Entry) 
                    cout << "Resting" << endl;
                    //#]
                    Resting_timeout = scheduleTimeout(5000, NULL);
                    res = eventConsumed;
                }
            
            break;
        }
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = Moving;
                    rootState_active = Moving;
                    //#[ state ROOT.Moving.(Entry) 
                    cout << "Moving" << endl;
                    //#]
                    Moving_timeout = scheduleTimeout(20000, NULL);
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
	File Path	: HexapodModel/DebugConfig/Body.cpp
*********************************************************************/
