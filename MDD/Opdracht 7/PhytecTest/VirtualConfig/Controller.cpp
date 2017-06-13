/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 13, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/Controller.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Controller.h"
//## event evKey(int)
#include "DesignKey.h"
//## package Design

//## class Controller

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Controller::m_control_C::InBound_C::InBound_C() {
    port = NULL;
}

Controller::m_control_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

Controller::m_control_C* Controller::m_control_C::InBound_C::getPort() const {
    return port;
}

void Controller::m_control_C::InBound_C::setPort(Controller::m_control_C* p_m_control_C) {
    _setPort(p_m_control_C);
}

void Controller::m_control_C::InBound_C::cleanUpRelations() {
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::m_control_C::InBound_C::__setPort(Controller::m_control_C* p_m_control_C) {
    port = p_m_control_C;
}

void Controller::m_control_C::InBound_C::_setPort(Controller::m_control_C* p_m_control_C) {
    __setPort(p_m_control_C);
}

void Controller::m_control_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::m_control_C::OutBound_C::OutBound_C() {
    itsIMotor = NULL;
}

Controller::m_control_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Controller::m_control_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
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

bool Controller::m_control_C::OutBound_C::send(IOxfEvent* event) {
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

OMReactive* Controller::m_control_C::OutBound_C::getItsIMotor() const {
    return itsIMotor;
}

void Controller::m_control_C::OutBound_C::setItsIMotor(OMReactive* p_OMReactive) {
    itsIMotor = p_OMReactive;
}

void Controller::m_control_C::OutBound_C::cleanUpRelations() {
    if(itsIMotor != NULL)
        {
            itsIMotor = NULL;
        }
}

Controller::m_control_C::m_control_C() {
    initRelations();
}

Controller::m_control_C::~m_control_C() {
}

void Controller::m_control_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iMotor* Controller::m_control_C::getItsIMotor() {
    //#[ operation getItsIMotor()
    return &OutBound;
    //#]
}

void Controller::m_control_C::setItsIMotor(OMReactive* p_iMotor) {
    //#[ operation setItsIMotor(OMReactive*)
    OutBound.setItsIMotor(p_iMotor);
    //#]
}

Controller::m_control_C::InBound_C* Controller::m_control_C::getInBound() const {
    return (Controller::m_control_C::InBound_C*) &InBound;
}

Controller::m_control_C::OutBound_C* Controller::m_control_C::getOutBound() const {
    return (Controller::m_control_C::OutBound_C*) &OutBound;
}

void Controller::m_control_C::initRelations() {
    InBound._setPort(this);
}

void Controller::m_control_C::destroy() {
}


using namespace std;


using namespace std;

Controller::t_control_C::InBound_C::InBound_C() {
    itsITachoCB = NULL;
    port = NULL;
}

Controller::t_control_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Controller::t_control_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
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

bool Controller::t_control_C::InBound_C::send(IOxfEvent* event) {
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

iTachoCB* Controller::t_control_C::InBound_C::getItsITachoCB() const {
    return itsITachoCB;
}

void Controller::t_control_C::InBound_C::setItsITachoCB(iTachoCB* p_iTachoCB) {
    itsITachoCB = p_iTachoCB;
}

Controller::t_control_C* Controller::t_control_C::InBound_C::getPort() const {
    return port;
}

void Controller::t_control_C::InBound_C::setPort(Controller::t_control_C* p_t_control_C) {
    _setPort(p_t_control_C);
}

void Controller::t_control_C::InBound_C::cleanUpRelations() {
    if(itsITachoCB != NULL)
        {
            itsITachoCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::t_control_C::InBound_C::__setPort(Controller::t_control_C* p_t_control_C) {
    port = p_t_control_C;
}

void Controller::t_control_C::InBound_C::_setPort(Controller::t_control_C* p_t_control_C) {
    __setPort(p_t_control_C);
}

void Controller::t_control_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::t_control_C::OutBound_C::OutBound_C() {
    itsITacho = NULL;
}

Controller::t_control_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Controller::t_control_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
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

bool Controller::t_control_C::OutBound_C::send(IOxfEvent* event) {
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

OMReactive* Controller::t_control_C::OutBound_C::getItsITacho() const {
    return itsITacho;
}

void Controller::t_control_C::OutBound_C::setItsITacho(OMReactive* p_OMReactive) {
    itsITacho = p_OMReactive;
}

void Controller::t_control_C::OutBound_C::cleanUpRelations() {
    if(itsITacho != NULL)
        {
            itsITacho = NULL;
        }
}

Controller::t_control_C::t_control_C() {
    initRelations();
}

Controller::t_control_C::~t_control_C() {
}

void Controller::t_control_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    InBound.setItsITachoCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iTacho* Controller::t_control_C::getItsITacho() {
    //#[ operation getItsITacho()
    return &OutBound;
    //#]
}

iTachoCB* Controller::t_control_C::getItsITachoCB() {
    //#[ operation getItsITachoCB()
    return &InBound;
    //#]
}

void Controller::t_control_C::setItsITacho(OMReactive* p_iTacho) {
    //#[ operation setItsITacho(OMReactive*)
    OutBound.setItsITacho(p_iTacho);
    //#]
}

void Controller::t_control_C::setItsITachoCB(iTachoCB* p_iTachoCB) {
    //#[ operation setItsITachoCB(iTachoCB*)
    InBound.setItsITachoCB(p_iTachoCB);
    //#]
}

Controller::t_control_C::InBound_C* Controller::t_control_C::getInBound() const {
    return (Controller::t_control_C::InBound_C*) &InBound;
}

Controller::t_control_C::OutBound_C* Controller::t_control_C::getOutBound() const {
    return (Controller::t_control_C::OutBound_C*) &OutBound;
}

void Controller::t_control_C::initRelations() {
    InBound._setPort(this);
}

void Controller::t_control_C::destroy() {
}


using namespace std;


using namespace std;

Controller::k_in_C::InBound_C::InBound_C() {
    itsIKeyCB = NULL;
    port = NULL;
}

Controller::k_in_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Controller::k_in_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIKeyCB != NULL) {
            if (event->isTypeOf(evKey_DesignKey_id)) {
                res = itsIKeyCB->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Controller::k_in_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIKeyCB != NULL) {
            if (event->isTypeOf(evKey_DesignKey_id)) {
                res = itsIKeyCB->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

iKeyCB* Controller::k_in_C::InBound_C::getItsIKeyCB() const {
    return itsIKeyCB;
}

void Controller::k_in_C::InBound_C::setItsIKeyCB(iKeyCB* p_iKeyCB) {
    itsIKeyCB = p_iKeyCB;
}

Controller::k_in_C* Controller::k_in_C::InBound_C::getPort() const {
    return port;
}

void Controller::k_in_C::InBound_C::setPort(Controller::k_in_C* p_k_in_C) {
    _setPort(p_k_in_C);
}

void Controller::k_in_C::InBound_C::cleanUpRelations() {
    if(itsIKeyCB != NULL)
        {
            itsIKeyCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::k_in_C::InBound_C::__setPort(Controller::k_in_C* p_k_in_C) {
    port = p_k_in_C;
}

void Controller::k_in_C::InBound_C::_setPort(Controller::k_in_C* p_k_in_C) {
    __setPort(p_k_in_C);
}

void Controller::k_in_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::k_in_C::OutBound_C::OutBound_C() {
}

Controller::k_in_C::OutBound_C::~OutBound_C() {
}

Controller::k_in_C::k_in_C() {
    initRelations();
}

Controller::k_in_C::~k_in_C() {
}

void Controller::k_in_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    InBound.setItsIKeyCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iKeyCB* Controller::k_in_C::getItsIKeyCB() {
    //#[ operation getItsIKeyCB()
    return &InBound;
    //#]
}

void Controller::k_in_C::setItsIKeyCB(iKeyCB* p_iKeyCB) {
    //#[ operation setItsIKeyCB(iKeyCB*)
    InBound.setItsIKeyCB(p_iKeyCB);
    //#]
}

Controller::k_in_C::InBound_C* Controller::k_in_C::getInBound() const {
    return (Controller::k_in_C::InBound_C*) &InBound;
}

Controller::k_in_C::OutBound_C* Controller::k_in_C::getOutBound() const {
    return (Controller::k_in_C::OutBound_C*) &OutBound;
}

void Controller::k_in_C::initRelations() {
    InBound._setPort(this);
}

void Controller::k_in_C::destroy() {
}


using namespace std;


using namespace std;

Controller::l1_C::InBound_C::InBound_C() {
    port = NULL;
}

Controller::l1_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

Controller::l1_C* Controller::l1_C::InBound_C::getPort() const {
    return port;
}

void Controller::l1_C::InBound_C::setPort(Controller::l1_C* p_l1_C) {
    _setPort(p_l1_C);
}

void Controller::l1_C::InBound_C::cleanUpRelations() {
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::l1_C::InBound_C::__setPort(Controller::l1_C* p_l1_C) {
    port = p_l1_C;
}

void Controller::l1_C::InBound_C::_setPort(Controller::l1_C* p_l1_C) {
    __setPort(p_l1_C);
}

void Controller::l1_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::l1_C::OutBound_C::OutBound_C() {
    itsILed = NULL;
}

Controller::l1_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Controller::l1_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Controller::l1_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Controller::l1_C::OutBound_C::getItsILed() const {
    return itsILed;
}

void Controller::l1_C::OutBound_C::setItsILed(OMReactive* p_OMReactive) {
    itsILed = p_OMReactive;
}

void Controller::l1_C::OutBound_C::cleanUpRelations() {
    if(itsILed != NULL)
        {
            itsILed = NULL;
        }
}

Controller::l1_C::l1_C() {
    initRelations();
}

Controller::l1_C::~l1_C() {
}

void Controller::l1_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iLed* Controller::l1_C::getItsILed() {
    //#[ operation getItsILed()
    return &OutBound;
    //#]
}

void Controller::l1_C::setItsILed(OMReactive* p_iLed) {
    //#[ operation setItsILed(OMReactive*)
    OutBound.setItsILed(p_iLed);
    //#]
}

Controller::l1_C::InBound_C* Controller::l1_C::getInBound() const {
    return (Controller::l1_C::InBound_C*) &InBound;
}

Controller::l1_C::OutBound_C* Controller::l1_C::getOutBound() const {
    return (Controller::l1_C::OutBound_C*) &OutBound;
}

void Controller::l1_C::initRelations() {
    InBound._setPort(this);
}

void Controller::l1_C::destroy() {
}


using namespace std;


using namespace std;

Controller::l2_C::InBound_C::InBound_C() {
    port = NULL;
}

Controller::l2_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

Controller::l2_C* Controller::l2_C::InBound_C::getPort() const {
    return port;
}

void Controller::l2_C::InBound_C::setPort(Controller::l2_C* p_l2_C) {
    _setPort(p_l2_C);
}

void Controller::l2_C::InBound_C::cleanUpRelations() {
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::l2_C::InBound_C::__setPort(Controller::l2_C* p_l2_C) {
    port = p_l2_C;
}

void Controller::l2_C::InBound_C::_setPort(Controller::l2_C* p_l2_C) {
    __setPort(p_l2_C);
}

void Controller::l2_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::l2_C::OutBound_C::OutBound_C() {
    itsILed = NULL;
}

Controller::l2_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Controller::l2_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Controller::l2_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Controller::l2_C::OutBound_C::getItsILed() const {
    return itsILed;
}

void Controller::l2_C::OutBound_C::setItsILed(OMReactive* p_OMReactive) {
    itsILed = p_OMReactive;
}

void Controller::l2_C::OutBound_C::cleanUpRelations() {
    if(itsILed != NULL)
        {
            itsILed = NULL;
        }
}

Controller::l2_C::l2_C() {
    initRelations();
}

Controller::l2_C::~l2_C() {
}

void Controller::l2_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iLed* Controller::l2_C::getItsILed() {
    //#[ operation getItsILed()
    return &OutBound;
    //#]
}

void Controller::l2_C::setItsILed(OMReactive* p_iLed) {
    //#[ operation setItsILed(OMReactive*)
    OutBound.setItsILed(p_iLed);
    //#]
}

Controller::l2_C::InBound_C* Controller::l2_C::getInBound() const {
    return (Controller::l2_C::InBound_C*) &InBound;
}

Controller::l2_C::OutBound_C* Controller::l2_C::getOutBound() const {
    return (Controller::l2_C::OutBound_C*) &OutBound;
}

void Controller::l2_C::initRelations() {
    InBound._setPort(this);
}

void Controller::l2_C::destroy() {
}


using namespace std;


using namespace std;

Controller::l3_C::InBound_C::InBound_C() {
    port = NULL;
}

Controller::l3_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

Controller::l3_C* Controller::l3_C::InBound_C::getPort() const {
    return port;
}

void Controller::l3_C::InBound_C::setPort(Controller::l3_C* p_l3_C) {
    _setPort(p_l3_C);
}

void Controller::l3_C::InBound_C::cleanUpRelations() {
    if(port != NULL)
        {
            port = NULL;
        }
}

void Controller::l3_C::InBound_C::__setPort(Controller::l3_C* p_l3_C) {
    port = p_l3_C;
}

void Controller::l3_C::InBound_C::_setPort(Controller::l3_C* p_l3_C) {
    __setPort(p_l3_C);
}

void Controller::l3_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Controller::l3_C::OutBound_C::OutBound_C() {
    itsILed = NULL;
}

Controller::l3_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Controller::l3_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Controller::l3_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Controller::l3_C::OutBound_C::getItsILed() const {
    return itsILed;
}

void Controller::l3_C::OutBound_C::setItsILed(OMReactive* p_OMReactive) {
    itsILed = p_OMReactive;
}

void Controller::l3_C::OutBound_C::cleanUpRelations() {
    if(itsILed != NULL)
        {
            itsILed = NULL;
        }
}

Controller::l3_C::l3_C() {
    initRelations();
}

Controller::l3_C::~l3_C() {
}

void Controller::l3_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iLed* Controller::l3_C::getItsILed() {
    //#[ operation getItsILed()
    return &OutBound;
    //#]
}

void Controller::l3_C::setItsILed(OMReactive* p_iLed) {
    //#[ operation setItsILed(OMReactive*)
    OutBound.setItsILed(p_iLed);
    //#]
}

Controller::l3_C::InBound_C* Controller::l3_C::getInBound() const {
    return (Controller::l3_C::InBound_C*) &InBound;
}

Controller::l3_C::OutBound_C* Controller::l3_C::getOutBound() const {
    return (Controller::l3_C::OutBound_C*) &OutBound;
}

void Controller::l3_C::initRelations() {
    InBound._setPort(this);
}

void Controller::l3_C::destroy() {
}
//#]

Controller::Controller(IOxfActive* theActiveContext) : floorNr(1), rampUpRotations(100) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Controller::~Controller() {
    cleanUpRelations();
    cancelTimeouts();
}

void Controller::init() {
    //#[ operation init()
    OUT_PORT(l1)->GEN(evOn());
    OUT_PORT(l2)->GEN(evOff());
    OUT_PORT(l3)->GEN(evOff());
    OUT_PORT(t_control)->GEN(evStartTacho());
    //#]
}

void Controller::rampDown(int count) {
    //#[ operation rampDown(int)
    counter += count;
    if(counter > rampUpRotations / 10)
    {
      counter = 0;
      OUT_PORT(m_control)->GEN(evSpeedDown()); 
      rampCount++;
    }
    //#]
}

void Controller::rampUp(int count) {
    //#[ operation rampUp(int)
    counter += count;
    if(counter > rampUpRotations / 10)
    {
      counter = 0;
      OUT_PORT(m_control)->GEN(evSpeedUp());
      rampCount++;
    }
    //#]
}

void Controller::setBlink() {
    //#[ operation setBlink()
    switch(newFloor)
    {
    	case 1:
    		OUT_PORT(l1)->GEN(evBlinkOn());
    		break;
    	case 2:
    		OUT_PORT(l2)->GEN(evBlinkOn());
    		break;
    	case 3:
    		OUT_PORT(l3)->GEN(evBlinkOn());
    		break;
    }
    //#]
}

void Controller::setLed(int on) {
    //#[ operation setLed(int)
    switch(floorNr)
    {
    	case 1:
    		if(on == 1) {OUT_PORT(l1)->GEN(evOn());}
    		else {OUT_PORT(l1)->GEN(evOff());}
    		break;
    	case 2:
    		if(on == 1) {OUT_PORT(l2)->GEN(evOn());}
    		else {OUT_PORT(l2)->GEN(evOff());}
    		break;
    		break;
    	case 3:
    		if(on == 1) {OUT_PORT(l3)->GEN(evOn());}
    		else {OUT_PORT(l3)->GEN(evOff());}
    		break;
    		break;
    }
    //#]
}

Controller::m_control_C* Controller::getM_control() const {
    return m_control;
}

Controller::m_control_C* Controller::get_m_control() const {
    return m_control;
}

Controller::m_control_C* Controller::newM_control() {
    m_control = new Controller::m_control_C;
    return m_control;
}

void Controller::deleteM_control() {
    delete m_control;
    m_control = NULL;
}

Controller::t_control_C* Controller::getT_control() const {
    return t_control;
}

Controller::t_control_C* Controller::get_t_control() const {
    return t_control;
}

Controller::t_control_C* Controller::newT_control() {
    t_control = new Controller::t_control_C;
    return t_control;
}

void Controller::deleteT_control() {
    delete t_control;
    t_control = NULL;
}

Controller::k_in_C* Controller::getK_in() const {
    return k_in;
}

Controller::k_in_C* Controller::get_k_in() const {
    return k_in;
}

Controller::k_in_C* Controller::newK_in() {
    k_in = new Controller::k_in_C;
    return k_in;
}

void Controller::deleteK_in() {
    delete k_in;
    k_in = NULL;
}

Controller::l1_C* Controller::getL1() const {
    return l1;
}

Controller::l1_C* Controller::get_l1() const {
    return l1;
}

Controller::l1_C* Controller::newL1() {
    l1 = new Controller::l1_C;
    return l1;
}

void Controller::deleteL1() {
    delete l1;
    l1 = NULL;
}

Controller::l2_C* Controller::getL2() const {
    return l2;
}

Controller::l2_C* Controller::get_l2() const {
    return l2;
}

Controller::l2_C* Controller::newL2() {
    l2 = new Controller::l2_C;
    return l2;
}

void Controller::deleteL2() {
    delete l2;
    l2 = NULL;
}

Controller::l3_C* Controller::getL3() const {
    return l3;
}

Controller::l3_C* Controller::get_l3() const {
    return l3;
}

Controller::l3_C* Controller::newL3() {
    l3 = new Controller::l3_C;
    return l3;
}

void Controller::deleteL3() {
    delete l3;
    l3 = NULL;
}

int Controller::getCounter() const {
    return counter;
}

void Controller::setCounter(int p_counter) {
    counter = p_counter;
}

int Controller::getFloorNr() const {
    return floorNr;
}

void Controller::setFloorNr(int p_floorNr) {
    floorNr = p_floorNr;
}

int Controller::getFullSpeedRotations() const {
    return fullSpeedRotations;
}

void Controller::setFullSpeedRotations(int p_fullSpeedRotations) {
    fullSpeedRotations = p_fullSpeedRotations;
}

int Controller::getNewFloor() const {
    return newFloor;
}

void Controller::setNewFloor(int p_newFloor) {
    newFloor = p_newFloor;
}

int Controller::getRampCount() const {
    return rampCount;
}

void Controller::setRampCount(int p_rampCount) {
    rampCount = p_rampCount;
}

int Controller::getRampUpRotations() const {
    return rampUpRotations;
}

void Controller::setRampUpRotations(int p_rampUpRotations) {
    rampUpRotations = p_rampUpRotations;
}

bool Controller::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Controller::initRelations() {
    m_control = newM_control();
    t_control = newT_control();
    k_in = newK_in();
    l1 = newL1();
    l2 = newL2();
    l3 = newL3();
    if(get_m_control())
       get_m_control()->connectController(this);
    if(get_t_control())
       get_t_control()->connectController(this);
    if(get_k_in())
       get_k_in()->connectController(this);
    if(get_l1())
       get_l1()->connectController(this);
    if(get_l2())
       get_l2()->connectController(this);
    if(get_l3())
       get_l3()->connectController(this);
}

void Controller::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    moving_subState = OMNonState;
    Idle_timeout = NULL;
}

void Controller::cleanUpRelations() {
    {
        deleteL3();
    }
    {
        deleteL2();
    }
    {
        deleteL1();
    }
    {
        deleteK_in();
    }
    {
        deleteT_control();
    }
    {
        deleteM_control();
    }
}

void Controller::cancelTimeouts() {
    if(Idle_timeout != NULL)
        {
            Idle_timeout->cancel();
            Idle_timeout = NULL;
        }
}

bool Controller::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Idle_timeout == arg)
        {
            Idle_timeout = NULL;
            res = true;
        }
    return res;
}

void Controller::rootState_entDef() {
    {
        //#[ transition 0 
        init();
        //#]
        rootState_subState = Idle;
        rootState_active = Idle;
        //#[ state ROOT.Idle.(Entry) 
        cout << "Idle State" << endl;
        
        //#]
        Idle_timeout = scheduleTimeout(30000, NULL);
    }
}

void Controller::rootState_exit() {
    switch (rootState_subState) {
        case Idle:
        {
            if(Idle_timeout != NULL)
                {
                    Idle_timeout->cancel();
                    Idle_timeout = NULL;
                }
            break;
        }
        case sendaction_6:
        {
            popNullTransition();
            break;
        }
        case sendaction_7:
        {
            popNullTransition();
            break;
        }
        case moving:
        {
            moving_exit();
            break;
        }
        default:
            break;
    }
    rootState_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus Controller::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Idle:
        {
            res = Idle_handleEvent();
            break;
        }
        case sendaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    moving_entDef();
                    res = eventConsumed;
                }
            
            break;
        }
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    moving_entDef();
                    res = eventConsumed;
                }
            
            break;
        }
        case RampUp:
        {
            if(IS_EVENT_TYPE_OF(evCount_DesignTacho_id))
                {
                    OMSETPARAMS(evCount);
                    //## transition 8 
                    if(rampCount <= 9)
                        {
                            //#[ transition 8 
                            rampUp(params->count);
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 10 
                            if(rampCount > 9)
                                {
                                    //#[ state ROOT.moving.RampUp.(Exit) 
                                    rampCount = 0;
                                    //#]
                                    moving_subState = FullSpeed;
                                    rootState_active = FullSpeed;
                                    //#[ state ROOT.moving.FullSpeed.(Entry) 
                                    cout << "Full speed" << endl;
                                    
                                    //#]
                                    res = eventConsumed;
                                }
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = moving_handleEvent();
                }
            break;
        }
        case RampDown:
        {
            if(IS_EVENT_TYPE_OF(evCount_DesignTacho_id))
                {
                    OMSETPARAMS(evCount);
                    //## transition 9 
                    if(rampCount <= 9)
                        {
                            //#[ transition 9 
                            rampDown(params->count);
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 13 
                            if(rampCount > 9)
                                {
                                    //#[ state ROOT.moving.RampDown.(Exit) 
                                    rampCount = 0;
                                    //#]
                                    //#[ transition 13 
                                    floorNr = newFloor;
                                    //#]
                                    moving_subState = terminate;
                                    rootState_active = terminate;
                                    res = eventConsumed;
                                }
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = moving_handleEvent();
                }
            break;
        }
        case FullSpeed:
        {
            if(IS_EVENT_TYPE_OF(evCount_DesignTacho_id))
                {
                    OMSETPARAMS(evCount);
                    //## transition 11 
                    if(counter < fullSpeedRotations)
                        {
                            //#[ transition 11 
                            counter += params->count;
                            cout << counter << endl;
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 12 
                            if(counter >= fullSpeedRotations)
                                {
                                    //#[ transition 12 
                                    counter = 0;
                                    //#]
                                    moving_subState = RampDown;
                                    rootState_active = RampDown;
                                    //#[ state ROOT.moving.RampDown.(Entry) 
                                    cout << "Ramp down" << endl;
                                    //#]
                                    res = eventConsumed;
                                }
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = moving_handleEvent();
                }
            break;
        }
        case terminate:
        {
            res = moving_handleEvent();
            break;
        }
        default:
            break;
    }
    return res;
}

void Controller::moving_entDef() {
    pushNullTransition();
    rootState_subState = moving;
    //#[ state ROOT.moving.(Entry) 
    cout << "Moving State" << endl;
    setLed(0);
    setBlink();
    OUT_PORT(m_control)->GEN(evStartMotor());
    OUT_PORT(t_control)->GEN(evStartTacho());
    //#]
    moving_subState = RampUp;
    rootState_active = RampUp;
    //#[ state ROOT.moving.RampUp.(Entry) 
    
    OUT_PORT(m_control)->GEN(evSpeedUp());
    cout << "Ramp up" << endl;
    //#]
}

void Controller::moving_exit() {
    popNullTransition();
    switch (moving_subState) {
        case RampUp:
        {
            //#[ state ROOT.moving.RampUp.(Exit) 
            rampCount = 0;
            //#]
            break;
        }
        case RampDown:
        {
            //#[ state ROOT.moving.RampDown.(Exit) 
            rampCount = 0;
            //#]
            break;
        }
        
        default:
            break;
    }
    moving_subState = OMNonState;
    //#[ state ROOT.moving.(Exit) 
    setLed(1);
    OUT_PORT(m_control)->GEN(evStopMotor());
    //#]
}

IOxfReactive::TakeEventStatus Controller::moving_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 14 
            if(IS_COMPLETED(moving))
                {
                    moving_exit();
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    //#[ state ROOT.Idle.(Entry) 
                    cout << "Idle State" << endl;
                    
                    //#]
                    Idle_timeout = scheduleTimeout(30000, NULL);
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Controller::Idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == Idle_timeout)
                {
                    //## transition 15 
                    if(floorNr != 1)
                        {
                            if(Idle_timeout != NULL)
                                {
                                    Idle_timeout->cancel();
                                    Idle_timeout = NULL;
                                }
                            //#[ transition 15 
                            newFloor = 1;
                            fullSpeedRotations = (500 * (floorNr - newFloor)) - 200;
                            //#]
                            pushNullTransition();
                            rootState_subState = sendaction_7;
                            rootState_active = sendaction_7;
                            //#[ state ROOT.sendaction_7.(Entry) 
                            OUT_PORT(m_control)->GEN(evSetDirection(1));
                            //#]
                            res = eventConsumed;
                        }
                }
        }
    else if(IS_EVENT_TYPE_OF(evKey_DesignKey_id))
        {
            OMSETPARAMS(evKey);
            //## transition 6 
            if(params->keyNr != floorNr)
                {
                    //## transition 1 
                    if(params->keyNr > floorNr)
                        {
                            if(Idle_timeout != NULL)
                                {
                                    Idle_timeout->cancel();
                                    Idle_timeout = NULL;
                                }
                            //#[ transition 1 
                            newFloor = params->keyNr;
                            fullSpeedRotations = (500 * (newFloor - floorNr)) - 200;
                            //#]
                            pushNullTransition();
                            rootState_subState = sendaction_6;
                            rootState_active = sendaction_6;
                            //#[ state ROOT.sendaction_6.(Entry) 
                            OUT_PORT(m_control)->GEN(evSetDirection(0));
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 2 
                            if(params->keyNr < floorNr)
                                {
                                    if(Idle_timeout != NULL)
                                        {
                                            Idle_timeout->cancel();
                                            Idle_timeout = NULL;
                                        }
                                    //#[ transition 2 
                                    newFloor = params->keyNr;
                                    fullSpeedRotations = (500 * (floorNr - newFloor)) - 200;
                                    //#]
                                    pushNullTransition();
                                    rootState_subState = sendaction_7;
                                    rootState_active = sendaction_7;
                                    //#[ state ROOT.sendaction_7.(Entry) 
                                    OUT_PORT(m_control)->GEN(evSetDirection(1));
                                    //#]
                                    res = eventConsumed;
                                }
                        }
                }
        }
    
    return res;
}

/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/Controller.cpp
*********************************************************************/
