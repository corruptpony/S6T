/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Body
//!	Generated Date	: Fri, 21, Apr 2017  
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

Body::LegPort_1_C::InBound_C::InBound_C() {
    itsILegCB = NULL;
    port = NULL;
}

Body::LegPort_1_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_1_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool Body::LegPort_1_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

ILegCB* Body::LegPort_1_C::InBound_C::getItsILegCB() const {
    return itsILegCB;
}

void Body::LegPort_1_C::InBound_C::setItsILegCB(ILegCB* p_ILegCB) {
    itsILegCB = p_ILegCB;
}

Body::LegPort_1_C* Body::LegPort_1_C::InBound_C::getPort() const {
    return port;
}

void Body::LegPort_1_C::InBound_C::setPort(Body::LegPort_1_C* p_LegPort_1_C) {
    _setPort(p_LegPort_1_C);
}

void Body::LegPort_1_C::InBound_C::cleanUpRelations() {
    if(itsILegCB != NULL)
        {
            itsILegCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Body::LegPort_1_C::InBound_C::__setPort(Body::LegPort_1_C* p_LegPort_1_C) {
    port = p_LegPort_1_C;
}

void Body::LegPort_1_C::InBound_C::_setPort(Body::LegPort_1_C* p_LegPort_1_C) {
    __setPort(p_LegPort_1_C);
}

void Body::LegPort_1_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Body::LegPort_1_C::OutBound_C::OutBound_C() {
    itsILeg = NULL;
}

Body::LegPort_1_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_1_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Body::LegPort_1_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Body::LegPort_1_C::OutBound_C::getItsILeg() const {
    return itsILeg;
}

void Body::LegPort_1_C::OutBound_C::setItsILeg(OMReactive* p_OMReactive) {
    itsILeg = p_OMReactive;
}

void Body::LegPort_1_C::OutBound_C::cleanUpRelations() {
    if(itsILeg != NULL)
        {
            itsILeg = NULL;
        }
}

Body::LegPort_1_C::LegPort_1_C() {
    initRelations();
}

Body::LegPort_1_C::~LegPort_1_C() {
}

void Body::LegPort_1_C::connectBody(Body* part) {
    //#[ operation connectBody(Body*)
    InBound.setItsILegCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

ILeg* Body::LegPort_1_C::getItsILeg() {
    //#[ operation getItsILeg()
    return &OutBound;
    //#]
}

ILegCB* Body::LegPort_1_C::getItsILegCB() {
    //#[ operation getItsILegCB()
    return &InBound;
    //#]
}

void Body::LegPort_1_C::setItsILeg(OMReactive* p_ILeg) {
    //#[ operation setItsILeg(OMReactive*)
    OutBound.setItsILeg(p_ILeg);
    //#]
}

void Body::LegPort_1_C::setItsILegCB(ILegCB* p_ILegCB) {
    //#[ operation setItsILegCB(ILegCB*)
    InBound.setItsILegCB(p_ILegCB);
    //#]
}

Body::LegPort_1_C::InBound_C* Body::LegPort_1_C::getInBound() const {
    return (Body::LegPort_1_C::InBound_C*) &InBound;
}

Body::LegPort_1_C::OutBound_C* Body::LegPort_1_C::getOutBound() const {
    return (Body::LegPort_1_C::OutBound_C*) &OutBound;
}

void Body::LegPort_1_C::initRelations() {
    InBound._setPort(this);
}

void Body::LegPort_1_C::destroy() {
}


using namespace std;


using namespace std;

Body::LegPort_2_C::InBound_C::InBound_C() {
    itsILegCB = NULL;
    port = NULL;
}

Body::LegPort_2_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_2_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool Body::LegPort_2_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

ILegCB* Body::LegPort_2_C::InBound_C::getItsILegCB() const {
    return itsILegCB;
}

void Body::LegPort_2_C::InBound_C::setItsILegCB(ILegCB* p_ILegCB) {
    itsILegCB = p_ILegCB;
}

Body::LegPort_2_C* Body::LegPort_2_C::InBound_C::getPort() const {
    return port;
}

void Body::LegPort_2_C::InBound_C::setPort(Body::LegPort_2_C* p_LegPort_2_C) {
    _setPort(p_LegPort_2_C);
}

void Body::LegPort_2_C::InBound_C::cleanUpRelations() {
    if(itsILegCB != NULL)
        {
            itsILegCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Body::LegPort_2_C::InBound_C::__setPort(Body::LegPort_2_C* p_LegPort_2_C) {
    port = p_LegPort_2_C;
}

void Body::LegPort_2_C::InBound_C::_setPort(Body::LegPort_2_C* p_LegPort_2_C) {
    __setPort(p_LegPort_2_C);
}

void Body::LegPort_2_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Body::LegPort_2_C::OutBound_C::OutBound_C() {
    itsILeg = NULL;
}

Body::LegPort_2_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_2_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Body::LegPort_2_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Body::LegPort_2_C::OutBound_C::getItsILeg() const {
    return itsILeg;
}

void Body::LegPort_2_C::OutBound_C::setItsILeg(OMReactive* p_OMReactive) {
    itsILeg = p_OMReactive;
}

void Body::LegPort_2_C::OutBound_C::cleanUpRelations() {
    if(itsILeg != NULL)
        {
            itsILeg = NULL;
        }
}

Body::LegPort_2_C::LegPort_2_C() {
    initRelations();
}

Body::LegPort_2_C::~LegPort_2_C() {
}

void Body::LegPort_2_C::connectBody(Body* part) {
    //#[ operation connectBody(Body*)
    InBound.setItsILegCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

ILeg* Body::LegPort_2_C::getItsILeg() {
    //#[ operation getItsILeg()
    return &OutBound;
    //#]
}

ILegCB* Body::LegPort_2_C::getItsILegCB() {
    //#[ operation getItsILegCB()
    return &InBound;
    //#]
}

void Body::LegPort_2_C::setItsILeg(OMReactive* p_ILeg) {
    //#[ operation setItsILeg(OMReactive*)
    OutBound.setItsILeg(p_ILeg);
    //#]
}

void Body::LegPort_2_C::setItsILegCB(ILegCB* p_ILegCB) {
    //#[ operation setItsILegCB(ILegCB*)
    InBound.setItsILegCB(p_ILegCB);
    //#]
}

Body::LegPort_2_C::InBound_C* Body::LegPort_2_C::getInBound() const {
    return (Body::LegPort_2_C::InBound_C*) &InBound;
}

Body::LegPort_2_C::OutBound_C* Body::LegPort_2_C::getOutBound() const {
    return (Body::LegPort_2_C::OutBound_C*) &OutBound;
}

void Body::LegPort_2_C::initRelations() {
    InBound._setPort(this);
}

void Body::LegPort_2_C::destroy() {
}


using namespace std;


using namespace std;

Body::sensorPort_C::InBound_C::InBound_C() {
    itsISensorCB = NULL;
    port = NULL;
}

Body::sensorPort_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Body::sensorPort_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsISensorCB != NULL) {
            if (event->isTypeOf(evAlarm_Design_id)) {
                res = itsISensorCB->send(event, params);
                return res;
            }
            if (event->isTypeOf(evClear_Design_id)) {
                res = itsISensorCB->send(event, params);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

bool Body::sensorPort_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsISensorCB != NULL) {
            if (event->isTypeOf(evAlarm_Design_id)) {
                res = itsISensorCB->send(event);
                return res;
            }
            if (event->isTypeOf(evClear_Design_id)) {
                res = itsISensorCB->send(event);
                return res;
            }
        }
    }
    return res;
    
    //#]
}

ISensorCB* Body::sensorPort_C::InBound_C::getItsISensorCB() const {
    return itsISensorCB;
}

void Body::sensorPort_C::InBound_C::setItsISensorCB(ISensorCB* p_ISensorCB) {
    itsISensorCB = p_ISensorCB;
}

Body::sensorPort_C* Body::sensorPort_C::InBound_C::getPort() const {
    return port;
}

void Body::sensorPort_C::InBound_C::setPort(Body::sensorPort_C* p_sensorPort_C) {
    _setPort(p_sensorPort_C);
}

void Body::sensorPort_C::InBound_C::cleanUpRelations() {
    if(itsISensorCB != NULL)
        {
            itsISensorCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Body::sensorPort_C::InBound_C::__setPort(Body::sensorPort_C* p_sensorPort_C) {
    port = p_sensorPort_C;
}

void Body::sensorPort_C::InBound_C::_setPort(Body::sensorPort_C* p_sensorPort_C) {
    __setPort(p_sensorPort_C);
}

void Body::sensorPort_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Body::sensorPort_C::OutBound_C::OutBound_C() {
}

Body::sensorPort_C::OutBound_C::~OutBound_C() {
}

Body::sensorPort_C::sensorPort_C() {
    initRelations();
}

Body::sensorPort_C::~sensorPort_C() {
}

void Body::sensorPort_C::connectBody(Body* part) {
    //#[ operation connectBody(Body*)
    InBound.setItsISensorCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

ISensorCB* Body::sensorPort_C::getItsISensorCB() {
    //#[ operation getItsISensorCB()
    return &InBound;
    //#]
}

void Body::sensorPort_C::setItsISensorCB(ISensorCB* p_ISensorCB) {
    //#[ operation setItsISensorCB(ISensorCB*)
    InBound.setItsISensorCB(p_ISensorCB);
    //#]
}

Body::sensorPort_C::InBound_C* Body::sensorPort_C::getInBound() const {
    return (Body::sensorPort_C::InBound_C*) &InBound;
}

Body::sensorPort_C::OutBound_C* Body::sensorPort_C::getOutBound() const {
    return (Body::sensorPort_C::OutBound_C*) &OutBound;
}

void Body::sensorPort_C::initRelations() {
    InBound._setPort(this);
}

void Body::sensorPort_C::destroy() {
}


using namespace std;


using namespace std;

Body::LegPort_3_C::InBound_C::InBound_C() {
    itsILegCB = NULL;
    port = NULL;
}

Body::LegPort_3_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_3_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool Body::LegPort_3_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

ILegCB* Body::LegPort_3_C::InBound_C::getItsILegCB() const {
    return itsILegCB;
}

void Body::LegPort_3_C::InBound_C::setItsILegCB(ILegCB* p_ILegCB) {
    itsILegCB = p_ILegCB;
}

Body::LegPort_3_C* Body::LegPort_3_C::InBound_C::getPort() const {
    return port;
}

void Body::LegPort_3_C::InBound_C::setPort(Body::LegPort_3_C* p_LegPort_3_C) {
    _setPort(p_LegPort_3_C);
}

void Body::LegPort_3_C::InBound_C::cleanUpRelations() {
    if(itsILegCB != NULL)
        {
            itsILegCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Body::LegPort_3_C::InBound_C::__setPort(Body::LegPort_3_C* p_LegPort_3_C) {
    port = p_LegPort_3_C;
}

void Body::LegPort_3_C::InBound_C::_setPort(Body::LegPort_3_C* p_LegPort_3_C) {
    __setPort(p_LegPort_3_C);
}

void Body::LegPort_3_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Body::LegPort_3_C::OutBound_C::OutBound_C() {
    itsILeg = NULL;
}

Body::LegPort_3_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_3_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Body::LegPort_3_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Body::LegPort_3_C::OutBound_C::getItsILeg() const {
    return itsILeg;
}

void Body::LegPort_3_C::OutBound_C::setItsILeg(OMReactive* p_OMReactive) {
    itsILeg = p_OMReactive;
}

void Body::LegPort_3_C::OutBound_C::cleanUpRelations() {
    if(itsILeg != NULL)
        {
            itsILeg = NULL;
        }
}

Body::LegPort_3_C::LegPort_3_C() {
    initRelations();
}

Body::LegPort_3_C::~LegPort_3_C() {
}

void Body::LegPort_3_C::connectBody(Body* part) {
    //#[ operation connectBody(Body*)
    InBound.setItsILegCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

ILeg* Body::LegPort_3_C::getItsILeg() {
    //#[ operation getItsILeg()
    return &OutBound;
    //#]
}

ILegCB* Body::LegPort_3_C::getItsILegCB() {
    //#[ operation getItsILegCB()
    return &InBound;
    //#]
}

void Body::LegPort_3_C::setItsILeg(OMReactive* p_ILeg) {
    //#[ operation setItsILeg(OMReactive*)
    OutBound.setItsILeg(p_ILeg);
    //#]
}

void Body::LegPort_3_C::setItsILegCB(ILegCB* p_ILegCB) {
    //#[ operation setItsILegCB(ILegCB*)
    InBound.setItsILegCB(p_ILegCB);
    //#]
}

Body::LegPort_3_C::InBound_C* Body::LegPort_3_C::getInBound() const {
    return (Body::LegPort_3_C::InBound_C*) &InBound;
}

Body::LegPort_3_C::OutBound_C* Body::LegPort_3_C::getOutBound() const {
    return (Body::LegPort_3_C::OutBound_C*) &OutBound;
}

void Body::LegPort_3_C::initRelations() {
    InBound._setPort(this);
}

void Body::LegPort_3_C::destroy() {
}


using namespace std;


using namespace std;

Body::LegPort_4_C::InBound_C::InBound_C() {
    itsILegCB = NULL;
    port = NULL;
}

Body::LegPort_4_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_4_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool Body::LegPort_4_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

ILegCB* Body::LegPort_4_C::InBound_C::getItsILegCB() const {
    return itsILegCB;
}

void Body::LegPort_4_C::InBound_C::setItsILegCB(ILegCB* p_ILegCB) {
    itsILegCB = p_ILegCB;
}

Body::LegPort_4_C* Body::LegPort_4_C::InBound_C::getPort() const {
    return port;
}

void Body::LegPort_4_C::InBound_C::setPort(Body::LegPort_4_C* p_LegPort_4_C) {
    _setPort(p_LegPort_4_C);
}

void Body::LegPort_4_C::InBound_C::cleanUpRelations() {
    if(itsILegCB != NULL)
        {
            itsILegCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Body::LegPort_4_C::InBound_C::__setPort(Body::LegPort_4_C* p_LegPort_4_C) {
    port = p_LegPort_4_C;
}

void Body::LegPort_4_C::InBound_C::_setPort(Body::LegPort_4_C* p_LegPort_4_C) {
    __setPort(p_LegPort_4_C);
}

void Body::LegPort_4_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Body::LegPort_4_C::OutBound_C::OutBound_C() {
    itsILeg = NULL;
}

Body::LegPort_4_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_4_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Body::LegPort_4_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Body::LegPort_4_C::OutBound_C::getItsILeg() const {
    return itsILeg;
}

void Body::LegPort_4_C::OutBound_C::setItsILeg(OMReactive* p_OMReactive) {
    itsILeg = p_OMReactive;
}

void Body::LegPort_4_C::OutBound_C::cleanUpRelations() {
    if(itsILeg != NULL)
        {
            itsILeg = NULL;
        }
}

Body::LegPort_4_C::LegPort_4_C() {
    initRelations();
}

Body::LegPort_4_C::~LegPort_4_C() {
}

void Body::LegPort_4_C::connectBody(Body* part) {
    //#[ operation connectBody(Body*)
    InBound.setItsILegCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

ILeg* Body::LegPort_4_C::getItsILeg() {
    //#[ operation getItsILeg()
    return &OutBound;
    //#]
}

ILegCB* Body::LegPort_4_C::getItsILegCB() {
    //#[ operation getItsILegCB()
    return &InBound;
    //#]
}

void Body::LegPort_4_C::setItsILeg(OMReactive* p_ILeg) {
    //#[ operation setItsILeg(OMReactive*)
    OutBound.setItsILeg(p_ILeg);
    //#]
}

void Body::LegPort_4_C::setItsILegCB(ILegCB* p_ILegCB) {
    //#[ operation setItsILegCB(ILegCB*)
    InBound.setItsILegCB(p_ILegCB);
    //#]
}

Body::LegPort_4_C::InBound_C* Body::LegPort_4_C::getInBound() const {
    return (Body::LegPort_4_C::InBound_C*) &InBound;
}

Body::LegPort_4_C::OutBound_C* Body::LegPort_4_C::getOutBound() const {
    return (Body::LegPort_4_C::OutBound_C*) &OutBound;
}

void Body::LegPort_4_C::initRelations() {
    InBound._setPort(this);
}

void Body::LegPort_4_C::destroy() {
}


using namespace std;


using namespace std;

Body::LegPort_5_C::InBound_C::InBound_C() {
    itsILegCB = NULL;
    port = NULL;
}

Body::LegPort_5_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_5_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool Body::LegPort_5_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

ILegCB* Body::LegPort_5_C::InBound_C::getItsILegCB() const {
    return itsILegCB;
}

void Body::LegPort_5_C::InBound_C::setItsILegCB(ILegCB* p_ILegCB) {
    itsILegCB = p_ILegCB;
}

Body::LegPort_5_C* Body::LegPort_5_C::InBound_C::getPort() const {
    return port;
}

void Body::LegPort_5_C::InBound_C::setPort(Body::LegPort_5_C* p_LegPort_5_C) {
    _setPort(p_LegPort_5_C);
}

void Body::LegPort_5_C::InBound_C::cleanUpRelations() {
    if(itsILegCB != NULL)
        {
            itsILegCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Body::LegPort_5_C::InBound_C::__setPort(Body::LegPort_5_C* p_LegPort_5_C) {
    port = p_LegPort_5_C;
}

void Body::LegPort_5_C::InBound_C::_setPort(Body::LegPort_5_C* p_LegPort_5_C) {
    __setPort(p_LegPort_5_C);
}

void Body::LegPort_5_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Body::LegPort_5_C::OutBound_C::OutBound_C() {
    itsILeg = NULL;
}

Body::LegPort_5_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_5_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Body::LegPort_5_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Body::LegPort_5_C::OutBound_C::getItsILeg() const {
    return itsILeg;
}

void Body::LegPort_5_C::OutBound_C::setItsILeg(OMReactive* p_OMReactive) {
    itsILeg = p_OMReactive;
}

void Body::LegPort_5_C::OutBound_C::cleanUpRelations() {
    if(itsILeg != NULL)
        {
            itsILeg = NULL;
        }
}

Body::LegPort_5_C::LegPort_5_C() {
    initRelations();
}

Body::LegPort_5_C::~LegPort_5_C() {
}

void Body::LegPort_5_C::connectBody(Body* part) {
    //#[ operation connectBody(Body*)
    InBound.setItsILegCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

ILeg* Body::LegPort_5_C::getItsILeg() {
    //#[ operation getItsILeg()
    return &OutBound;
    //#]
}

ILegCB* Body::LegPort_5_C::getItsILegCB() {
    //#[ operation getItsILegCB()
    return &InBound;
    //#]
}

void Body::LegPort_5_C::setItsILeg(OMReactive* p_ILeg) {
    //#[ operation setItsILeg(OMReactive*)
    OutBound.setItsILeg(p_ILeg);
    //#]
}

void Body::LegPort_5_C::setItsILegCB(ILegCB* p_ILegCB) {
    //#[ operation setItsILegCB(ILegCB*)
    InBound.setItsILegCB(p_ILegCB);
    //#]
}

Body::LegPort_5_C::InBound_C* Body::LegPort_5_C::getInBound() const {
    return (Body::LegPort_5_C::InBound_C*) &InBound;
}

Body::LegPort_5_C::OutBound_C* Body::LegPort_5_C::getOutBound() const {
    return (Body::LegPort_5_C::OutBound_C*) &OutBound;
}

void Body::LegPort_5_C::initRelations() {
    InBound._setPort(this);
}

void Body::LegPort_5_C::destroy() {
}


using namespace std;


using namespace std;

Body::LegPort_6_C::InBound_C::InBound_C() {
    itsILegCB = NULL;
    port = NULL;
}

Body::LegPort_6_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_6_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool Body::LegPort_6_C::InBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

ILegCB* Body::LegPort_6_C::InBound_C::getItsILegCB() const {
    return itsILegCB;
}

void Body::LegPort_6_C::InBound_C::setItsILegCB(ILegCB* p_ILegCB) {
    itsILegCB = p_ILegCB;
}

Body::LegPort_6_C* Body::LegPort_6_C::InBound_C::getPort() const {
    return port;
}

void Body::LegPort_6_C::InBound_C::setPort(Body::LegPort_6_C* p_LegPort_6_C) {
    _setPort(p_LegPort_6_C);
}

void Body::LegPort_6_C::InBound_C::cleanUpRelations() {
    if(itsILegCB != NULL)
        {
            itsILegCB = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Body::LegPort_6_C::InBound_C::__setPort(Body::LegPort_6_C* p_LegPort_6_C) {
    port = p_LegPort_6_C;
}

void Body::LegPort_6_C::InBound_C::_setPort(Body::LegPort_6_C* p_LegPort_6_C) {
    __setPort(p_LegPort_6_C);
}

void Body::LegPort_6_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Body::LegPort_6_C::OutBound_C::OutBound_C() {
    itsILeg = NULL;
}

Body::LegPort_6_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Body::LegPort_6_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Body::LegPort_6_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Body::LegPort_6_C::OutBound_C::getItsILeg() const {
    return itsILeg;
}

void Body::LegPort_6_C::OutBound_C::setItsILeg(OMReactive* p_OMReactive) {
    itsILeg = p_OMReactive;
}

void Body::LegPort_6_C::OutBound_C::cleanUpRelations() {
    if(itsILeg != NULL)
        {
            itsILeg = NULL;
        }
}

Body::LegPort_6_C::LegPort_6_C() {
    initRelations();
}

Body::LegPort_6_C::~LegPort_6_C() {
}

void Body::LegPort_6_C::connectBody(Body* part) {
    //#[ operation connectBody(Body*)
    InBound.setItsILegCB(part);
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

ILeg* Body::LegPort_6_C::getItsILeg() {
    //#[ operation getItsILeg()
    return &OutBound;
    //#]
}

ILegCB* Body::LegPort_6_C::getItsILegCB() {
    //#[ operation getItsILegCB()
    return &InBound;
    //#]
}

void Body::LegPort_6_C::setItsILeg(OMReactive* p_ILeg) {
    //#[ operation setItsILeg(OMReactive*)
    OutBound.setItsILeg(p_ILeg);
    //#]
}

void Body::LegPort_6_C::setItsILegCB(ILegCB* p_ILegCB) {
    //#[ operation setItsILegCB(ILegCB*)
    InBound.setItsILegCB(p_ILegCB);
    //#]
}

Body::LegPort_6_C::InBound_C* Body::LegPort_6_C::getInBound() const {
    return (Body::LegPort_6_C::InBound_C*) &InBound;
}

Body::LegPort_6_C::OutBound_C* Body::LegPort_6_C::getOutBound() const {
    return (Body::LegPort_6_C::OutBound_C*) &OutBound;
}

void Body::LegPort_6_C::initRelations() {
    InBound._setPort(this);
}

void Body::LegPort_6_C::destroy() {
}
//#]

Body::Body(IOxfActive* theActiveContext) : odd(true), readyCounter(0) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Body::~Body() {
    cleanUpRelations();
    cancelTimeouts();
}

Body::LegPort_1_C* Body::getLegPort_1() const {
    return LegPort_1;
}

Body::LegPort_1_C* Body::get_LegPort_1() const {
    return LegPort_1;
}

Body::LegPort_1_C* Body::newLegPort_1() {
    LegPort_1 = new Body::LegPort_1_C;
    return LegPort_1;
}

void Body::deleteLegPort_1() {
    delete LegPort_1;
    LegPort_1 = NULL;
}

Body::LegPort_2_C* Body::getLegPort_2() const {
    return LegPort_2;
}

Body::LegPort_2_C* Body::get_LegPort_2() const {
    return LegPort_2;
}

Body::LegPort_2_C* Body::newLegPort_2() {
    LegPort_2 = new Body::LegPort_2_C;
    return LegPort_2;
}

void Body::deleteLegPort_2() {
    delete LegPort_2;
    LegPort_2 = NULL;
}

Body::sensorPort_C* Body::getSensorPort() const {
    return sensorPort;
}

Body::sensorPort_C* Body::get_sensorPort() const {
    return sensorPort;
}

Body::sensorPort_C* Body::newSensorPort() {
    sensorPort = new Body::sensorPort_C;
    return sensorPort;
}

void Body::deleteSensorPort() {
    delete sensorPort;
    sensorPort = NULL;
}

Body::LegPort_3_C* Body::getLegPort_3() const {
    return LegPort_3;
}

Body::LegPort_3_C* Body::get_LegPort_3() const {
    return LegPort_3;
}

Body::LegPort_3_C* Body::newLegPort_3() {
    LegPort_3 = new Body::LegPort_3_C;
    return LegPort_3;
}

void Body::deleteLegPort_3() {
    delete LegPort_3;
    LegPort_3 = NULL;
}

Body::LegPort_4_C* Body::getLegPort_4() const {
    return LegPort_4;
}

Body::LegPort_4_C* Body::get_LegPort_4() const {
    return LegPort_4;
}

Body::LegPort_4_C* Body::newLegPort_4() {
    LegPort_4 = new Body::LegPort_4_C;
    return LegPort_4;
}

void Body::deleteLegPort_4() {
    delete LegPort_4;
    LegPort_4 = NULL;
}

Body::LegPort_5_C* Body::getLegPort_5() const {
    return LegPort_5;
}

Body::LegPort_5_C* Body::get_LegPort_5() const {
    return LegPort_5;
}

Body::LegPort_5_C* Body::newLegPort_5() {
    LegPort_5 = new Body::LegPort_5_C;
    return LegPort_5;
}

void Body::deleteLegPort_5() {
    delete LegPort_5;
    LegPort_5 = NULL;
}

Body::LegPort_6_C* Body::getLegPort_6() const {
    return LegPort_6;
}

Body::LegPort_6_C* Body::get_LegPort_6() const {
    return LegPort_6;
}

Body::LegPort_6_C* Body::newLegPort_6() {
    LegPort_6 = new Body::LegPort_6_C;
    return LegPort_6;
}

void Body::deleteLegPort_6() {
    delete LegPort_6;
    LegPort_6 = NULL;
}

bool Body::getOdd() const {
    return odd;
}

void Body::setOdd(bool p_odd) {
    odd = p_odd;
}

int Body::getReadyCounter() const {
    return readyCounter;
}

void Body::setReadyCounter(int p_readyCounter) {
    readyCounter = p_readyCounter;
}

bool Body::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Body::initRelations() {
    LegPort_1 = newLegPort_1();
    LegPort_2 = newLegPort_2();
    sensorPort = newSensorPort();
    LegPort_3 = newLegPort_3();
    LegPort_4 = newLegPort_4();
    LegPort_5 = newLegPort_5();
    LegPort_6 = newLegPort_6();
    if(get_LegPort_1())
       get_LegPort_1()->connectBody(this);
    if(get_LegPort_2())
       get_LegPort_2()->connectBody(this);
    if(get_sensorPort())
       get_sensorPort()->connectBody(this);
    if(get_LegPort_3())
       get_LegPort_3()->connectBody(this);
    if(get_LegPort_4())
       get_LegPort_4()->connectBody(this);
    if(get_LegPort_5())
       get_LegPort_5()->connectBody(this);
    if(get_LegPort_6())
       get_LegPort_6()->connectBody(this);
}

void Body::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Resting_timeout = NULL;
    Moving_subState = OMNonState;
    Moving_timeout = NULL;
}

void Body::cleanUpRelations() {
    {
        deleteLegPort_6();
    }
    {
        deleteLegPort_5();
    }
    {
        deleteLegPort_4();
    }
    {
        deleteLegPort_3();
    }
    {
        deleteSensorPort();
    }
    {
        deleteLegPort_2();
    }
    {
        deleteLegPort_1();
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
        case StiffenEventSender:
        {
            popNullTransition();
            break;
        }
        case RelaxEventSender:
        {
            popNullTransition();
            break;
        }
        case Moving:
        {
            Moving_exit();
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
                            rootState_subState = StiffenEventSender;
                            rootState_active = StiffenEventSender;
                            //#[ state ROOT.StiffenEventSender.(Entry) 
                            OUT_PORT(LegPort_1)->GEN(evStiffen);
                            OUT_PORT(LegPort_2)->GEN(evStiffen);
                            OUT_PORT(LegPort_3)->GEN(evStiffen);
                            OUT_PORT(LegPort_4)->GEN(evStiffen);
                            OUT_PORT(LegPort_5)->GEN(evStiffen);
                            OUT_PORT(LegPort_6)->GEN(evStiffen);
                            
                            //#]
                            res = eventConsumed;
                        }
                }
            
            break;
        }
        case StiffenEventSender:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    Moving_entDef();
                    res = eventConsumed;
                }
            
            break;
        }
        case RelaxEventSender:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = Resting;
                    rootState_active = Resting;
                    Resting_timeout = scheduleTimeout(5000, NULL);
                    res = eventConsumed;
                }
            
            break;
        }
        case MoveEven:
        {
            res = MoveEven_handleEvent();
            break;
        }
        case MoveOdd:
        {
            res = MoveOdd_handleEvent();
            break;
        }
        case Freeze:
        {
            res = Freeze_handleEvent();
            break;
        }
        default:
            break;
    }
    return res;
}

void Body::Moving_entDef() {
    rootState_subState = Moving;
    Moving_timeout = scheduleTimeout(20000, NULL);
    pushNullTransition();
    Moving_subState = MoveOdd;
    rootState_active = MoveOdd;
    //#[ state ROOT.Moving.MoveOdd.(Entry) 
    OUT_PORT(LegPort_1)->GEN(evMove);
    OUT_PORT(LegPort_3)->GEN(evMove);
    OUT_PORT(LegPort_5)->GEN(evMove);
    cout << endl;
    //#]
}

void Body::Moving_exit() {
    switch (Moving_subState) {
        case MoveEven:
        {
            popNullTransition();
            break;
        }
        case MoveOdd:
        {
            popNullTransition();
            break;
        }
        case Freeze:
        {
            //#[ state ROOT.Moving.Freeze.(Exit) 
            OUT_PORT(LegPort_1)->GEN(evContinue);
            OUT_PORT(LegPort_2)->GEN(evContinue);
            OUT_PORT(LegPort_3)->GEN(evContinue);
            OUT_PORT(LegPort_4)->GEN(evContinue);
            OUT_PORT(LegPort_5)->GEN(evContinue);
            OUT_PORT(LegPort_6)->GEN(evContinue);
            //#]
            break;
        }
        default:
            break;
    }
    Moving_subState = OMNonState;
    if(Moving_timeout != NULL)
        {
            Moving_timeout->cancel();
            Moving_timeout = NULL;
        }
}

IOxfReactive::TakeEventStatus Body::Moving_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == Moving_timeout)
                {
                    Moving_exit();
                    pushNullTransition();
                    rootState_subState = RelaxEventSender;
                    rootState_active = RelaxEventSender;
                    //#[ state ROOT.RelaxEventSender.(Entry) 
                    OUT_PORT(LegPort_1)->GEN(evRelax);
                    OUT_PORT(LegPort_2)->GEN(evRelax);
                    OUT_PORT(LegPort_3)->GEN(evRelax);
                    OUT_PORT(LegPort_4)->GEN(evRelax);
                    OUT_PORT(LegPort_5)->GEN(evRelax);
                    OUT_PORT(LegPort_6)->GEN(evRelax);
                    
                    //#]
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Body::MoveOdd_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evReady_Design_id))
        {
            //#[ transition 12 
            readyCounter++;
            //#]
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evAlarm_Design_id))
        {
            popNullTransition();
            //#[ transition 11 
            odd = true;
            //#]
            Moving_subState = Freeze;
            rootState_active = Freeze;
            //#[ state ROOT.Moving.Freeze.(Entry) 
            OUT_PORT(LegPort_1)->GEN(evFreeze);
            OUT_PORT(LegPort_2)->GEN(evFreeze);
            OUT_PORT(LegPort_3)->GEN(evFreeze);
            OUT_PORT(LegPort_4)->GEN(evFreeze);
            OUT_PORT(LegPort_5)->GEN(evFreeze);
            OUT_PORT(LegPort_6)->GEN(evFreeze);
            
            //#]
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 6 
            if(readyCounter == 3)
                {
                    popNullTransition();
                    //#[ transition 6 
                    readyCounter = 0;
                    //#]
                    pushNullTransition();
                    Moving_subState = MoveEven;
                    rootState_active = MoveEven;
                    //#[ state ROOT.Moving.MoveEven.(Entry) 
                    OUT_PORT(LegPort_2)->GEN(evMove);
                    OUT_PORT(LegPort_4)->GEN(evMove);
                    OUT_PORT(LegPort_6)->GEN(evMove);
                    cout << endl;
                    //#]
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Moving_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Body::MoveEven_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evReady_Design_id))
        {
            //#[ transition 13 
            readyCounter++;
            //#]
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evAlarm_Design_id))
        {
            popNullTransition();
            //#[ transition 8 
            odd = false;
            //#]
            Moving_subState = Freeze;
            rootState_active = Freeze;
            //#[ state ROOT.Moving.Freeze.(Entry) 
            OUT_PORT(LegPort_1)->GEN(evFreeze);
            OUT_PORT(LegPort_2)->GEN(evFreeze);
            OUT_PORT(LegPort_3)->GEN(evFreeze);
            OUT_PORT(LegPort_4)->GEN(evFreeze);
            OUT_PORT(LegPort_5)->GEN(evFreeze);
            OUT_PORT(LegPort_6)->GEN(evFreeze);
            
            //#]
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 7 
            if(readyCounter == 3)
                {
                    popNullTransition();
                    //#[ transition 7 
                    readyCounter = 0;
                    //#]
                    pushNullTransition();
                    Moving_subState = MoveOdd;
                    rootState_active = MoveOdd;
                    //#[ state ROOT.Moving.MoveOdd.(Entry) 
                    OUT_PORT(LegPort_1)->GEN(evMove);
                    OUT_PORT(LegPort_3)->GEN(evMove);
                    OUT_PORT(LegPort_5)->GEN(evMove);
                    cout << endl;
                    //#]
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Moving_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Body::Freeze_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evClear_Design_id))
        {
            //## transition 9 
            if(odd)
                {
                    //#[ state ROOT.Moving.Freeze.(Exit) 
                    OUT_PORT(LegPort_1)->GEN(evContinue);
                    OUT_PORT(LegPort_2)->GEN(evContinue);
                    OUT_PORT(LegPort_3)->GEN(evContinue);
                    OUT_PORT(LegPort_4)->GEN(evContinue);
                    OUT_PORT(LegPort_5)->GEN(evContinue);
                    OUT_PORT(LegPort_6)->GEN(evContinue);
                    //#]
                    pushNullTransition();
                    Moving_subState = MoveOdd;
                    rootState_active = MoveOdd;
                    //#[ state ROOT.Moving.MoveOdd.(Entry) 
                    OUT_PORT(LegPort_1)->GEN(evMove);
                    OUT_PORT(LegPort_3)->GEN(evMove);
                    OUT_PORT(LegPort_5)->GEN(evMove);
                    cout << endl;
                    //#]
                    res = eventConsumed;
                }
            else
                {
                    //## transition 10 
                    if(!odd)
                        {
                            //#[ state ROOT.Moving.Freeze.(Exit) 
                            OUT_PORT(LegPort_1)->GEN(evContinue);
                            OUT_PORT(LegPort_2)->GEN(evContinue);
                            OUT_PORT(LegPort_3)->GEN(evContinue);
                            OUT_PORT(LegPort_4)->GEN(evContinue);
                            OUT_PORT(LegPort_5)->GEN(evContinue);
                            OUT_PORT(LegPort_6)->GEN(evContinue);
                            //#]
                            pushNullTransition();
                            Moving_subState = MoveEven;
                            rootState_active = MoveEven;
                            //#[ state ROOT.Moving.MoveEven.(Entry) 
                            OUT_PORT(LegPort_2)->GEN(evMove);
                            OUT_PORT(LegPort_4)->GEN(evMove);
                            OUT_PORT(LegPort_6)->GEN(evMove);
                            cout << endl;
                            //#]
                            res = eventConsumed;
                        }
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Moving_handleEvent();
        }
    return res;
}

/*********************************************************************
	File Path	: HexapodModel/DebugConfig/Body.cpp
*********************************************************************/
