/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: PhytecConfig
	Model Element	: Motor
//!	Generated Date	: Mon, 8, May 2017  
	File Path	: PhytecTest/PhytecConfig/Motor.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Motor.h"
//## package Design

//## class Motor

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Motor::control_C::InBound_C::InBound_C() {
    itsIMotor = NULL;
    port = NULL;
}

Motor::control_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Motor::control_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool Motor::control_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

iMotor* Motor::control_C::InBound_C::getItsIMotor() const {
    return itsIMotor;
}

void Motor::control_C::InBound_C::setItsIMotor(iMotor* p_iMotor) {
    itsIMotor = p_iMotor;
}

Motor::control_C* Motor::control_C::InBound_C::getPort() const {
    return port;
}

void Motor::control_C::InBound_C::setPort(Motor::control_C* p_control_C) {
    _setPort(p_control_C);
}

void Motor::control_C::InBound_C::cleanUpRelations() {
    if(itsIMotor != NULL)
        {
            itsIMotor = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Motor::control_C::InBound_C::__setPort(Motor::control_C* p_control_C) {
    port = p_control_C;
}

void Motor::control_C::InBound_C::_setPort(Motor::control_C* p_control_C) {
    __setPort(p_control_C);
}

void Motor::control_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Motor::control_C::OutBound_C::OutBound_C() {
}

Motor::control_C::OutBound_C::~OutBound_C() {
}

Motor::control_C::control_C() {
    initRelations();
}

Motor::control_C::~control_C() {
}

void Motor::control_C::connectMotor(Motor* part) {
    //#[ operation connectMotor(Motor*)
    InBound.setItsIMotor(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iMotor* Motor::control_C::getItsIMotor() {
    //#[ operation getItsIMotor()
    return &InBound;
    //#]
}

void Motor::control_C::setItsIMotor(iMotor* p_iMotor) {
    //#[ operation setItsIMotor(iMotor*)
    InBound.setItsIMotor(p_iMotor);
    //#]
}

Motor::control_C::InBound_C* Motor::control_C::getInBound() const {
    return (Motor::control_C::InBound_C*) &InBound;
}

Motor::control_C::OutBound_C* Motor::control_C::getOutBound() const {
    return (Motor::control_C::OutBound_C*) &OutBound;
}

void Motor::control_C::initRelations() {
    InBound._setPort(this);
}

void Motor::control_C::destroy() {
}
//#]

Motor::Motor(IOxfActive* theActiveContext) : direction(0) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Motor::~Motor() {
    cleanUpRelations();
}

void Motor::setSpeed(int speed) {
    //#[ operation setSpeed(int)
    ofstream file;
    file.open(MOTOR_DUTY);
    if(!direction){file << speed ;}
    else {file << (1000 - speed);}
    file.close();
    //#]
}

void Motor::speedDown() {
    //#[ operation speedDown()
    duty -= 100;
    if(duty < 0){duty = 0;}  
    setSpeed(duty);
    //#]
}

void Motor::speedUp() {
    //#[ operation speedUp()
    duty += 100;
    if(duty > 1000){duty = 1000;}  
    setSpeed(duty);
    //#]
}

void Motor::startMotor() {
    //#[ operation startMotor()
    ofstream file;  
    file.open(MOTOR_PERIOD);
    file << 3000;
    file.close();
    file.open(MOTOR_DUTY);
    if(!direction){ file << 0; }
    else { file << 1000; }
    file.close();
    file.open(MOTOR_ACTIVE);
    file << 1;
    file.close();
    //#]
}

void Motor::stopMotor() {
    //#[ operation stopMotor()
    ofstream file;
    file.open(MOTOR_ACTIVE);
    file << 0;
    file.close();
    //#]
}

Motor::control_C* Motor::getControl() const {
    return control;
}

Motor::control_C* Motor::get_control() const {
    return control;
}

Motor::control_C* Motor::newControl() {
    control = new Motor::control_C;
    return control;
}

void Motor::deleteControl() {
    delete control;
    control = NULL;
}

int Motor::getDirection() const {
    return direction;
}

void Motor::setDirection(int p_direction) {
    direction = p_direction;
}

int Motor::getDuty() const {
    return duty;
}

void Motor::setDuty(int p_duty) {
    duty = p_duty;
}

bool Motor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Motor::initRelations() {
    control = newControl();
    if(get_control())
       get_control()->connectMotor(this);
}

void Motor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Motor::cleanUpRelations() {
    {
        deleteControl();
    }
}

void Motor::rootState_entDef() {
    {
        rootState_subState = Idle;
        rootState_active = Idle;
    }
}

IOxfReactive::TakeEventStatus Motor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(evSpeedDown_Design_id))
                {
                    //#[ transition 4 
                    cout << "Error!" << endl;
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSetDirection_Design_id))
                {
                    OMSETPARAMS(evSetDirection);
                    //#[ transition 2 
                    direction = params->direction;
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStopMotor_Design_id))
                {
                    //#[ transition 6 
                    cout << "Error!" << endl;
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStartMotor_Design_id))
                {
                    //#[ transition 0 
                    startMotor();
                    //#]
                    rootState_subState = Active;
                    rootState_active = Active;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSetSpeed_Design_id))
                {
                    OMSETPARAMS(evSetSpeed);
                    //#[ transition 3 
                    cout << "Error!" << endl;
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSpeedUp_Design_id))
                {
                    //#[ transition 5 
                    cout << "Error!" << endl;
                    //#]
                    res = eventConsumed;
                }
            
            break;
        }
        case Active:
        {
            if(IS_EVENT_TYPE_OF(evSpeedDown_Design_id))
                {
                    //#[ transition 9 
                    speedDown();
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSetDirection_Design_id))
                {
                    OMSETPARAMS(evSetDirection);
                    //#[ transition 11 
                    cout << "Error!" << endl;
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStopMotor_Design_id))
                {
                    //#[ transition 1 
                    stopMotor();
                    //#]
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStartMotor_Design_id))
                {
                    //#[ transition 10 
                    cout << "Error!" << endl;
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSetSpeed_Design_id))
                {
                    OMSETPARAMS(evSetSpeed);
                    //#[ transition 7 
                    duty = params->duty;
                    setSpeed(duty);
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSpeedUp_Design_id))
                {
                    //#[ transition 8 
                    speedUp();
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
	File Path	: PhytecTest/PhytecConfig/Motor.cpp
*********************************************************************/
