/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: PhytecTestSystem
//!	Generated Date	: Mon, 8, May 2017  
	File Path	: PhytecTest/VirtualConfig/PhytecTestSystem.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "PhytecTestSystem.h"
//## package Test

//## class PhytecTestSystem

using namespace std;

//## class PhytecTestSystem::MotorTester

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

PhytecTestSystem::MotorTester_C::control_C::InBound_C::InBound_C() {
    port = NULL;
}

PhytecTestSystem::MotorTester_C::control_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

PhytecTestSystem::MotorTester_C::control_C* PhytecTestSystem::MotorTester_C::control_C::InBound_C::getPort() const {
    return port;
}

void PhytecTestSystem::MotorTester_C::control_C::InBound_C::setPort(PhytecTestSystem::MotorTester_C::control_C* p_control_C) {
    _setPort(p_control_C);
}

void PhytecTestSystem::MotorTester_C::control_C::InBound_C::cleanUpRelations() {
    if(port != NULL)
        {
            port = NULL;
        }
}

void PhytecTestSystem::MotorTester_C::control_C::InBound_C::__setPort(PhytecTestSystem::MotorTester_C::control_C* p_control_C) {
    port = p_control_C;
}

void PhytecTestSystem::MotorTester_C::control_C::InBound_C::_setPort(PhytecTestSystem::MotorTester_C::control_C* p_control_C) {
    __setPort(p_control_C);
}

void PhytecTestSystem::MotorTester_C::control_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

PhytecTestSystem::MotorTester_C::control_C::OutBound_C::OutBound_C() {
    itsIMotor = NULL;
}

PhytecTestSystem::MotorTester_C::control_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool PhytecTestSystem::MotorTester_C::control_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        if (itsIMotor != NULL) {
            if (event->isTypeOf(evStartMotor_Design_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
            if (event->isTypeOf(evStopMotor_Design_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
            if (event->isTypeOf(evSetDirection_Design_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
            if (event->isTypeOf(evSetSpeed_Design_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
            if (event->isTypeOf(evSpeedUp_Design_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
            if (event->isTypeOf(evSpeedDown_Design_id)) {
                res = itsIMotor->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool PhytecTestSystem::MotorTester_C::control_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        if (itsIMotor != NULL) {
            if (event->isTypeOf(evStartMotor_Design_id)) {
                res = itsIMotor->send(event);
                return res;
            }
            if (event->isTypeOf(evStopMotor_Design_id)) {
                res = itsIMotor->send(event);
                return res;
            }
            if (event->isTypeOf(evSetDirection_Design_id)) {
                res = itsIMotor->send(event);
                return res;
            }
            if (event->isTypeOf(evSetSpeed_Design_id)) {
                res = itsIMotor->send(event);
                return res;
            }
            if (event->isTypeOf(evSpeedUp_Design_id)) {
                res = itsIMotor->send(event);
                return res;
            }
            if (event->isTypeOf(evSpeedDown_Design_id)) {
                res = itsIMotor->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

OMReactive* PhytecTestSystem::MotorTester_C::control_C::OutBound_C::getItsIMotor() const {
    return itsIMotor;
}

void PhytecTestSystem::MotorTester_C::control_C::OutBound_C::setItsIMotor(OMReactive* p_OMReactive) {
    itsIMotor = p_OMReactive;
}

void PhytecTestSystem::MotorTester_C::control_C::OutBound_C::cleanUpRelations() {
    if(itsIMotor != NULL)
        {
            itsIMotor = NULL;
        }
}

PhytecTestSystem::MotorTester_C::control_C::control_C() {
    initRelations();
}

PhytecTestSystem::MotorTester_C::control_C::~control_C() {
}

void PhytecTestSystem::MotorTester_C::control_C::connectMotorTester(MotorTester_C* part) {
    //#[ operation connectMotorTester(MotorTester_C*)
    
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iMotor* PhytecTestSystem::MotorTester_C::control_C::getItsIMotor() {
    //#[ operation getItsIMotor()
    return &OutBound;
    //#]
}

void PhytecTestSystem::MotorTester_C::control_C::setItsIMotor(OMReactive* p_iMotor) {
    //#[ operation setItsIMotor(OMReactive*)
    OutBound.setItsIMotor(p_iMotor);
    //#]
}

PhytecTestSystem::MotorTester_C::control_C::InBound_C* PhytecTestSystem::MotorTester_C::control_C::getInBound() const {
    return (PhytecTestSystem::MotorTester_C::control_C::InBound_C*) &InBound;
}

PhytecTestSystem::MotorTester_C::control_C::OutBound_C* PhytecTestSystem::MotorTester_C::control_C::getOutBound() const {
    return (PhytecTestSystem::MotorTester_C::control_C::OutBound_C*) &OutBound;
}

void PhytecTestSystem::MotorTester_C::control_C::initRelations() {
    InBound._setPort(this);
}

void PhytecTestSystem::MotorTester_C::control_C::destroy() {
}
//#]

PhytecTestSystem::MotorTester_C::MotorTester_C(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

PhytecTestSystem::MotorTester_C::~MotorTester_C() {
    cleanUpRelations();
    cancelTimeouts();
}

PhytecTestSystem::MotorTester_C::control_C* PhytecTestSystem::MotorTester_C::getControl() const {
    return control;
}

PhytecTestSystem::MotorTester_C::control_C* PhytecTestSystem::MotorTester_C::get_control() const {
    return control;
}

PhytecTestSystem::MotorTester_C::control_C* PhytecTestSystem::MotorTester_C::newControl() {
    control = new PhytecTestSystem::MotorTester_C::control_C;
    return control;
}

void PhytecTestSystem::MotorTester_C::deleteControl() {
    delete control;
    control = NULL;
}

bool PhytecTestSystem::MotorTester_C::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PhytecTestSystem::MotorTester_C::initRelations() {
    control = newControl();
    if(get_control())
       get_control()->connectMotorTester(this);
}

void PhytecTestSystem::MotorTester_C::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    sendaction_7_timeout = NULL;
    sendaction_6_timeout = NULL;
    sendaction_5_timeout = NULL;
    sendaction_4_timeout = NULL;
    sendaction_3_timeout = NULL;
    sendaction_2_timeout = NULL;
    sendaction_1_timeout = NULL;
}

void PhytecTestSystem::MotorTester_C::cleanUpRelations() {
    {
        deleteControl();
    }
}

void PhytecTestSystem::MotorTester_C::cancelTimeouts() {
    if(sendaction_7_timeout != NULL)
        {
            sendaction_7_timeout->cancel();
            sendaction_7_timeout = NULL;
        }
    if(sendaction_6_timeout != NULL)
        {
            sendaction_6_timeout->cancel();
            sendaction_6_timeout = NULL;
        }
    if(sendaction_5_timeout != NULL)
        {
            sendaction_5_timeout->cancel();
            sendaction_5_timeout = NULL;
        }
    if(sendaction_4_timeout != NULL)
        {
            sendaction_4_timeout->cancel();
            sendaction_4_timeout = NULL;
        }
    if(sendaction_3_timeout != NULL)
        {
            sendaction_3_timeout->cancel();
            sendaction_3_timeout = NULL;
        }
    if(sendaction_2_timeout != NULL)
        {
            sendaction_2_timeout->cancel();
            sendaction_2_timeout = NULL;
        }
    if(sendaction_1_timeout != NULL)
        {
            sendaction_1_timeout->cancel();
            sendaction_1_timeout = NULL;
        }
}

bool PhytecTestSystem::MotorTester_C::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(sendaction_7_timeout == arg)
        {
            sendaction_7_timeout = NULL;
            res = true;
        }
    if(sendaction_6_timeout == arg)
        {
            sendaction_6_timeout = NULL;
            res = true;
        }
    if(sendaction_5_timeout == arg)
        {
            sendaction_5_timeout = NULL;
            res = true;
        }
    if(sendaction_4_timeout == arg)
        {
            sendaction_4_timeout = NULL;
            res = true;
        }
    if(sendaction_3_timeout == arg)
        {
            sendaction_3_timeout = NULL;
            res = true;
        }
    if(sendaction_2_timeout == arg)
        {
            sendaction_2_timeout = NULL;
            res = true;
        }
    if(sendaction_1_timeout == arg)
        {
            sendaction_1_timeout = NULL;
            res = true;
        }
    return res;
}

void PhytecTestSystem::MotorTester_C::rootState_entDef() {
    {
        rootState_subState = sendaction_1;
        rootState_active = sendaction_1;
        //#[ state ROOT.sendaction_1.(Entry) 
        OUT_PORT(control)->GEN(evStartMotor);
        //#]
        sendaction_1_timeout = scheduleTimeout(5000, NULL);
    }
}

void PhytecTestSystem::MotorTester_C::rootState_exit() {
    switch (rootState_subState) {
        case sendaction_1:
        {
            if(sendaction_1_timeout != NULL)
                {
                    sendaction_1_timeout->cancel();
                    sendaction_1_timeout = NULL;
                }
            break;
        }
        case sendaction_2:
        {
            if(sendaction_2_timeout != NULL)
                {
                    sendaction_2_timeout->cancel();
                    sendaction_2_timeout = NULL;
                }
            break;
        }
        case sendaction_3:
        {
            if(sendaction_3_timeout != NULL)
                {
                    sendaction_3_timeout->cancel();
                    sendaction_3_timeout = NULL;
                }
            break;
        }
        case sendaction_4:
        {
            if(sendaction_4_timeout != NULL)
                {
                    sendaction_4_timeout->cancel();
                    sendaction_4_timeout = NULL;
                }
            break;
        }
        case sendaction_5:
        {
            if(sendaction_5_timeout != NULL)
                {
                    sendaction_5_timeout->cancel();
                    sendaction_5_timeout = NULL;
                }
            break;
        }
        case sendaction_6:
        {
            if(sendaction_6_timeout != NULL)
                {
                    sendaction_6_timeout->cancel();
                    sendaction_6_timeout = NULL;
                }
            break;
        }
        case sendaction_7:
        {
            if(sendaction_7_timeout != NULL)
                {
                    sendaction_7_timeout->cancel();
                    sendaction_7_timeout = NULL;
                }
            break;
        }
        default:
            break;
    }
    rootState_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus PhytecTestSystem::MotorTester_C::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case sendaction_1:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == sendaction_1_timeout)
                        {
                            if(sendaction_1_timeout != NULL)
                                {
                                    sendaction_1_timeout->cancel();
                                    sendaction_1_timeout = NULL;
                                }
                            rootState_subState = sendaction_2;
                            rootState_active = sendaction_2;
                            //#[ state ROOT.sendaction_2.(Entry) 
                            OUT_PORT(control)->GEN(evSetSpeed(500));
                            //#]
                            sendaction_2_timeout = scheduleTimeout(5000, NULL);
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == sendaction_2_timeout)
                        {
                            if(sendaction_2_timeout != NULL)
                                {
                                    sendaction_2_timeout->cancel();
                                    sendaction_2_timeout = NULL;
                                }
                            rootState_subState = sendaction_7;
                            rootState_active = sendaction_7;
                            //#[ state ROOT.sendaction_7.(Entry) 
                            OUT_PORT(control)->GEN(evSpeedDown);
                            //#]
                            sendaction_7_timeout = scheduleTimeout(5000, NULL);
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == sendaction_3_timeout)
                        {
                            if(sendaction_3_timeout != NULL)
                                {
                                    sendaction_3_timeout->cancel();
                                    sendaction_3_timeout = NULL;
                                }
                            rootState_subState = sendaction_6;
                            rootState_active = sendaction_6;
                            //#[ state ROOT.sendaction_6.(Entry) 
                            OUT_PORT(control)->GEN(evSpeedUp);
                            //#]
                            sendaction_6_timeout = scheduleTimeout(5000, NULL);
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == sendaction_4_timeout)
                        {
                            if(sendaction_4_timeout != NULL)
                                {
                                    sendaction_4_timeout->cancel();
                                    sendaction_4_timeout = NULL;
                                }
                            rootState_subState = sendaction_5;
                            rootState_active = sendaction_5;
                            //#[ state ROOT.sendaction_5.(Entry) 
                            OUT_PORT(control)->GEN(evSetDirection(0));
                            //#]
                            sendaction_5_timeout = scheduleTimeout(5000, NULL);
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case sendaction_5:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == sendaction_5_timeout)
                        {
                            if(sendaction_5_timeout != NULL)
                                {
                                    sendaction_5_timeout->cancel();
                                    sendaction_5_timeout = NULL;
                                }
                            rootState_subState = sendaction_1;
                            rootState_active = sendaction_1;
                            //#[ state ROOT.sendaction_1.(Entry) 
                            OUT_PORT(control)->GEN(evStartMotor);
                            //#]
                            sendaction_1_timeout = scheduleTimeout(5000, NULL);
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case sendaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == sendaction_6_timeout)
                        {
                            if(sendaction_6_timeout != NULL)
                                {
                                    sendaction_6_timeout->cancel();
                                    sendaction_6_timeout = NULL;
                                }
                            rootState_subState = sendaction_4;
                            rootState_active = sendaction_4;
                            //#[ state ROOT.sendaction_4.(Entry) 
                            OUT_PORT(control)->GEN(evStopMotor);
                            //#]
                            sendaction_4_timeout = scheduleTimeout(5000, NULL);
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == sendaction_7_timeout)
                        {
                            if(sendaction_7_timeout != NULL)
                                {
                                    sendaction_7_timeout->cancel();
                                    sendaction_7_timeout = NULL;
                                }
                            rootState_subState = sendaction_3;
                            rootState_active = sendaction_3;
                            //#[ state ROOT.sendaction_3.(Entry) 
                            OUT_PORT(control)->GEN(evSetDirection(1));
                            //#]
                            sendaction_3_timeout = scheduleTimeout(5000, NULL);
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

PhytecTestSystem::PhytecTestSystem(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsMotor.setShouldDelete(false);
        }
        itsMotor.setActiveContext(theActiveContext, false);
        {
            MotorTester.setShouldDelete(false);
        }
        MotorTester.setActiveContext(theActiveContext, false);
    }
    initRelations();
}

PhytecTestSystem::~PhytecTestSystem() {
}

PhytecTestSystem::MotorTester_C* PhytecTestSystem::getMotorTester() const {
    return (PhytecTestSystem::MotorTester_C*) &MotorTester;
}

Motor* PhytecTestSystem::getItsMotor() const {
    return (Motor*) &itsMotor;
}

bool PhytecTestSystem::startBehavior() {
    bool done = true;
    done &= MotorTester.startBehavior();
    done &= itsMotor.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void PhytecTestSystem::initRelations() {
    {
    	
    	MotorTester.get_control()->setItsIMotor(itsMotor.get_control()->getItsIMotor());
    	
    }
}

void PhytecTestSystem::destroy() {
    MotorTester.destroy();
    itsMotor.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/PhytecTestSystem.cpp
*********************************************************************/
