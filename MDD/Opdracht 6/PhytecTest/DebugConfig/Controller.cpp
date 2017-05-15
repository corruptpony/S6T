/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: DebugConfig
	Model Element	: Controller
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/DebugConfig/Controller.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Controller.h"
//## package Design

//## class Controller

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Controller::t_C::InBound_C::InBound_C() {
    itsITachoCB = NULL;
    port = NULL;
}

Controller::t_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Controller::t_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool Controller::t_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

iTachoCB* Controller::t_C::InBound_C::getItsITachoCB() const {
    return itsITachoCB;
}

void Controller::t_C::InBound_C::setItsITachoCB(iTachoCB* p_iTachoCB) {
    itsITachoCB = p_iTachoCB;
}

Controller::t_C* Controller::t_C::InBound_C::getPort() const {
    return port;
}

void Controller::t_C::InBound_C::setPort(Controller::t_C* p_t_C) {
    _setPort(p_t_C);
}

void Controller::t_C::InBound_C::cleanUpRelations() {
    if(itsITachoCB != NULL)
        {
            itsITachoCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::t_C::InBound_C::__setPort(Controller::t_C* p_t_C) {
    port = p_t_C;
}

void Controller::t_C::InBound_C::_setPort(Controller::t_C* p_t_C) {
    __setPort(p_t_C);
}

void Controller::t_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::t_C::OutBound_C::OutBound_C() {
    itsITacho = NULL;
}

Controller::t_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Controller::t_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Controller::t_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Controller::t_C::OutBound_C::getItsITacho() const {
    return itsITacho;
}

void Controller::t_C::OutBound_C::setItsITacho(OMReactive* p_OMReactive) {
    itsITacho = p_OMReactive;
}

void Controller::t_C::OutBound_C::cleanUpRelations() {
    if(itsITacho != NULL)
        {
            itsITacho = NULL;
        }
}

Controller::t_C::t_C() {
    initRelations();
}

Controller::t_C::~t_C() {
}

void Controller::t_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    InBound.setItsITachoCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iTacho* Controller::t_C::getItsITacho() {
    //#[ operation getItsITacho()
    return &OutBound;
    //#]
}

iTachoCB* Controller::t_C::getItsITachoCB() {
    //#[ operation getItsITachoCB()
    return &InBound;
    //#]
}

void Controller::t_C::setItsITacho(OMReactive* p_iTacho) {
    //#[ operation setItsITacho(OMReactive*)
    OutBound.setItsITacho(p_iTacho);
    //#]
}

void Controller::t_C::setItsITachoCB(iTachoCB* p_iTachoCB) {
    //#[ operation setItsITachoCB(iTachoCB*)
    InBound.setItsITachoCB(p_iTachoCB);
    //#]
}

Controller::t_C::InBound_C* Controller::t_C::getInBound() const {
    return (Controller::t_C::InBound_C*) &InBound;
}

Controller::t_C::OutBound_C* Controller::t_C::getOutBound() const {
    return (Controller::t_C::OutBound_C*) &OutBound;
}

void Controller::t_C::initRelations() {
    InBound._setPort(this);
}

void Controller::t_C::destroy() {
}


using namespace std;


using namespace std;

Controller::m_C::InBound_C::InBound_C() {
    port = NULL;
}

Controller::m_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

Controller::m_C* Controller::m_C::InBound_C::getPort() const {
    return port;
}

void Controller::m_C::InBound_C::setPort(Controller::m_C* p_m_C) {
    _setPort(p_m_C);
}

void Controller::m_C::InBound_C::cleanUpRelations() {
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::m_C::InBound_C::__setPort(Controller::m_C* p_m_C) {
    port = p_m_C;
}

void Controller::m_C::InBound_C::_setPort(Controller::m_C* p_m_C) {
    __setPort(p_m_C);
}

void Controller::m_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::m_C::OutBound_C::OutBound_C() {
    itsIMotor = NULL;
}

Controller::m_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Controller::m_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        if (itsIMotor != NULL) {
            if (event->isTypeOf(evStartMotor_DesignMotor_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
            if (event->isTypeOf(evStopMotor_DesignMotor_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
            if (event->isTypeOf(evSetDirection_DesignMotor_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
            if (event->isTypeOf(evSetSpeed_DesignMotor_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
            if (event->isTypeOf(evSpeedUp_DesignMotor_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
            if (event->isTypeOf(evSpeedDown_DesignMotor_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Controller::m_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        if (itsIMotor != NULL) {
            if (event->isTypeOf(evStartMotor_DesignMotor_id)) {
                res = itsIMotor->send(event);
                return res;
            }
            if (event->isTypeOf(evStopMotor_DesignMotor_id)) {
                res = itsIMotor->send(event);
                return res;
            }
            if (event->isTypeOf(evSetDirection_DesignMotor_id)) {
                res = itsIMotor->send(event);
                return res;
            }
            if (event->isTypeOf(evSetSpeed_DesignMotor_id)) {
                res = itsIMotor->send(event);
                return res;
            }
            if (event->isTypeOf(evSpeedUp_DesignMotor_id)) {
                res = itsIMotor->send(event);
                return res;
            }
            if (event->isTypeOf(evSpeedDown_DesignMotor_id)) {
                res = itsIMotor->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

OMReactive* Controller::m_C::OutBound_C::getItsIMotor() const {
    return itsIMotor;
}

void Controller::m_C::OutBound_C::setItsIMotor(OMReactive* p_OMReactive) {
    itsIMotor = p_OMReactive;
}

void Controller::m_C::OutBound_C::cleanUpRelations() {
    if(itsIMotor != NULL)
        {
            itsIMotor = NULL;
        }
}

Controller::m_C::m_C() {
    initRelations();
}

Controller::m_C::~m_C() {
}

void Controller::m_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iMotor* Controller::m_C::getItsIMotor() {
    //#[ operation getItsIMotor()
    return &OutBound;
    //#]
}

void Controller::m_C::setItsIMotor(OMReactive* p_iMotor) {
    //#[ operation setItsIMotor(OMReactive*)
    OutBound.setItsIMotor(p_iMotor);
    //#]
}

Controller::m_C::InBound_C* Controller::m_C::getInBound() const {
    return (Controller::m_C::InBound_C*) &InBound;
}

Controller::m_C::OutBound_C* Controller::m_C::getOutBound() const {
    return (Controller::m_C::OutBound_C*) &OutBound;
}

void Controller::m_C::initRelations() {
    InBound._setPort(this);
}

void Controller::m_C::destroy() {
}


using namespace std;


using namespace std;

Controller::k_C::InBound_C::InBound_C() {
    itsIKeyCB = NULL;
    port = NULL;
}

Controller::k_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Controller::k_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIKeyCB != NULL) {
            if (event->isTypeOf(evKey_Design_id)) {
                res = itsIKeyCB->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Controller::k_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIKeyCB != NULL) {
            if (event->isTypeOf(evKey_Design_id)) {
                res = itsIKeyCB->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

iKeyCB* Controller::k_C::InBound_C::getItsIKeyCB() const {
    return itsIKeyCB;
}

void Controller::k_C::InBound_C::setItsIKeyCB(iKeyCB* p_iKeyCB) {
    itsIKeyCB = p_iKeyCB;
}

Controller::k_C* Controller::k_C::InBound_C::getPort() const {
    return port;
}

void Controller::k_C::InBound_C::setPort(Controller::k_C* p_k_C) {
    _setPort(p_k_C);
}

void Controller::k_C::InBound_C::cleanUpRelations() {
    if(itsIKeyCB != NULL)
        {
            itsIKeyCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::k_C::InBound_C::__setPort(Controller::k_C* p_k_C) {
    port = p_k_C;
}

void Controller::k_C::InBound_C::_setPort(Controller::k_C* p_k_C) {
    __setPort(p_k_C);
}

void Controller::k_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::k_C::OutBound_C::OutBound_C() {
}

Controller::k_C::OutBound_C::~OutBound_C() {
}

Controller::k_C::k_C() {
    initRelations();
}

Controller::k_C::~k_C() {
}

void Controller::k_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    InBound.setItsIKeyCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iKeyCB* Controller::k_C::getItsIKeyCB() {
    //#[ operation getItsIKeyCB()
    return &InBound;
    //#]
}

void Controller::k_C::setItsIKeyCB(iKeyCB* p_iKeyCB) {
    //#[ operation setItsIKeyCB(iKeyCB*)
    InBound.setItsIKeyCB(p_iKeyCB);
    //#]
}

Controller::k_C::InBound_C* Controller::k_C::getInBound() const {
    return (Controller::k_C::InBound_C*) &InBound;
}

Controller::k_C::OutBound_C* Controller::k_C::getOutBound() const {
    return (Controller::k_C::OutBound_C*) &OutBound;
}

void Controller::k_C::initRelations() {
    InBound._setPort(this);
}

void Controller::k_C::destroy() {
}
//#]

Controller::Controller(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Controller::~Controller() {
    cleanUpRelations();
}

Controller::t_C* Controller::getT() const {
    return t;
}

Controller::t_C* Controller::get_t() const {
    return t;
}

Controller::t_C* Controller::newT() {
    t = new Controller::t_C;
    return t;
}

void Controller::deleteT() {
    delete t;
    t = NULL;
}

Controller::m_C* Controller::getM() const {
    return m;
}

Controller::m_C* Controller::get_m() const {
    return m;
}

Controller::m_C* Controller::newM() {
    m = new Controller::m_C;
    return m;
}

void Controller::deleteM() {
    delete m;
    m = NULL;
}

Controller::k_C* Controller::getK() const {
    return k;
}

Controller::k_C* Controller::get_k() const {
    return k;
}

Controller::k_C* Controller::newK() {
    k = new Controller::k_C;
    return k;
}

void Controller::deleteK() {
    delete k;
    k = NULL;
}

bool Controller::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Controller::initRelations() {
    t = newT();
    m = newM();
    k = newK();
    if(get_t())
       get_t()->connectController(this);
    if(get_m())
       get_m()->connectController(this);
    if(get_k())
       get_k()->connectController(this);
}

void Controller::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Controller::cleanUpRelations() {
    {
        deleteK();
    }
    {
        deleteM();
    }
    {
        deleteT();
    }
}

void Controller::rootState_entDef() {
    {
        rootState_subState = Idle;
        rootState_active = Idle;
        //#[ state ROOT.Idle.(Entry) 
        OUT_PORT(m)->GEN(evStopMotor());
        OUT_PORT(t)->GEN(evStopTacho());
        //#]
    }
}

IOxfReactive::TakeEventStatus Controller::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evKey_Design_id))
                {
                    OMSETPARAMS(evKey);
                    //## transition 0 
                    if(params->keyNr==1)
                        {
                            rootState_subState = Running;
                            rootState_active = Running;
                            //#[ state ROOT.Running.(Entry) 
                            OUT_PORT(m)->GEN(evStartMotor());
                            OUT_PORT(t)->GEN(evStartTacho());
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 2 
                            if(params->keyNr==2)
                                {
                                    //#[ transition 2 
                                    OUT_PORT(m)->GEN(evSetDirection(0));
                                    cout << "Direction set to 0" << endl;
                                    //#]
                                    res = eventConsumed;
                                }
                            else
                                {
                                    //## transition 3 
                                    if(params->keyNr==3)
                                        {
                                            //#[ transition 3 
                                            OUT_PORT(m)->GEN(evSetDirection(1));
                                            cout << "Direction set to 1" << endl;
                                            //#]
                                            res = eventConsumed;
                                        }
                                }
                        }
                }
            
            break;
        }
        case Running:
        {
            if(IS_EVENT_TYPE_OF(evKey_Design_id))
                {
                    OMSETPARAMS(evKey);
                    //## transition 1 
                    if(params->keyNr==1)
                        {
                            rootState_subState = Idle;
                            rootState_active = Idle;
                            //#[ state ROOT.Idle.(Entry) 
                            OUT_PORT(m)->GEN(evStopMotor());
                            OUT_PORT(t)->GEN(evStopTacho());
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 4 
                            if(params->keyNr==2)
                                {
                                    //#[ transition 4 
                                    OUT_PORT(m)->GEN(evSpeedUp);
                                    //#]
                                    res = eventConsumed;
                                }
                            else
                                {
                                    //## transition 5 
                                    if(params->keyNr==3)
                                        {
                                            //#[ transition 5 
                                            OUT_PORT(m)->GEN(evSpeedDown);
                                            //#]
                                            res = eventConsumed;
                                        }
                                }
                        }
                }
            else if(IS_EVENT_TYPE_OF(evCount_DesignTacho_id))
                {
                    OMSETPARAMS(evCount);
                    //#[ transition 6 
                    cout << "RPM: " << params->count*60 << endl;
                    //#]
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
	File Path	: PhytecTest/DebugConfig/Controller.cpp
*********************************************************************/
