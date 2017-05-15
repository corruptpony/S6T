/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: PhytecConfig
	Model Element	: Key
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/PhytecConfig/Key.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Key.h"
//## package Design

//## class Key

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Key::Out_C::InBound_C::InBound_C() {
    port = NULL;
}

Key::Out_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

Key::Out_C* Key::Out_C::InBound_C::getPort() const {
    return port;
}

void Key::Out_C::InBound_C::setPort(Key::Out_C* p_Out_C) {
    _setPort(p_Out_C);
}

void Key::Out_C::InBound_C::cleanUpRelations() {
    if(port != NULL)
        {
            port = NULL;
        }
}

void Key::Out_C::InBound_C::__setPort(Key::Out_C* p_Out_C) {
    port = p_Out_C;
}

void Key::Out_C::InBound_C::_setPort(Key::Out_C* p_Out_C) {
    __setPort(p_Out_C);
}

void Key::Out_C::InBound_C::_clearPort() {
    port = NULL;
}


using namespace std;

Key::Out_C::OutBound_C::OutBound_C() {
    itsIKeyCB = NULL;
}

Key::Out_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Key::Out_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    //#[ operation send(IOxfEvent*,const IOxfEventGenerationParams&)
    bool res = false;
    if (event != NULL) {
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

bool Key::Out_C::OutBound_C::send(IOxfEvent* event) {
    //#[ operation send(IOxfEvent*)
    bool res = false;
    if (event != NULL) {
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

OMReactive* Key::Out_C::OutBound_C::getItsIKeyCB() const {
    return itsIKeyCB;
}

void Key::Out_C::OutBound_C::setItsIKeyCB(OMReactive* p_OMReactive) {
    itsIKeyCB = p_OMReactive;
}

void Key::Out_C::OutBound_C::cleanUpRelations() {
    if(itsIKeyCB != NULL)
        {
            itsIKeyCB = NULL;
        }
}

Key::Out_C::Out_C() {
    initRelations();
}

Key::Out_C::~Out_C() {
}

void Key::Out_C::connectKey(Key* part) {
    //#[ operation connectKey(Key*)
    
    InBound.setPort(this); // for IS_PORT macro support
    
    //#]
}

iKeyCB* Key::Out_C::getItsIKeyCB() {
    //#[ operation getItsIKeyCB()
    return &OutBound;
    //#]
}

void Key::Out_C::setItsIKeyCB(OMReactive* p_iKeyCB) {
    //#[ operation setItsIKeyCB(OMReactive*)
    OutBound.setItsIKeyCB(p_iKeyCB);
    //#]
}

Key::Out_C::InBound_C* Key::Out_C::getInBound() const {
    return (Key::Out_C::InBound_C*) &InBound;
}

Key::Out_C::OutBound_C* Key::Out_C::getOutBound() const {
    return (Key::Out_C::OutBound_C*) &OutBound;
}

void Key::Out_C::initRelations() {
    InBound._setPort(this);
}

void Key::Out_C::destroy() {
}
//#]

Key::Key(int Key, IOxfActive* theActiveContext) : keyNr(0) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
    //#[ operation Key(int)
    keyNr = Key;
    //#]
}

Key::~Key() {
    cleanUpRelations();
    cancelTimeouts();
}

int Key::getKey() {
    //#[ operation getKey()
    int count = 0;
    ifstream file;
    switch(keyNr)
    { 
    	case 1:    
    		file.open(KEY1);  
    		break;
    	case 2:            
    		file.open(KEY2);  
    		break;
    	case 3:    
    		file.open(KEY3);  
    		break;
    	default: 
    		return 0;
    }    
    if(!file.eof())
    {
    	file >> count;
    }
    file.close();
    return count;
    //#]
}

Key::Out_C* Key::getOut() const {
    return Out;
}

Key::Out_C* Key::get_Out() const {
    return Out;
}

Key::Out_C* Key::newOut() {
    Out = new Key::Out_C;
    return Out;
}

void Key::deleteOut() {
    delete Out;
    Out = NULL;
}

int Key::getKeyNr() const {
    return keyNr;
}

void Key::setKeyNr(int p_keyNr) {
    keyNr = p_keyNr;
}

bool Key::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Key::initRelations() {
    Out = newOut();
    if(get_Out())
       get_Out()->connectKey(this);
}

void Key::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Checking_timeout = NULL;
}

void Key::cleanUpRelations() {
    {
        deleteOut();
    }
}

void Key::cancelTimeouts() {
    if(Checking_timeout != NULL)
        {
            Checking_timeout->cancel();
            Checking_timeout = NULL;
        }
}

bool Key::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Checking_timeout == arg)
        {
            Checking_timeout = NULL;
            res = true;
        }
    return res;
}

void Key::rootState_entDef() {
    {
        rootState_subState = Checking;
        rootState_active = Checking;
        //#[ state ROOT.Checking.(Entry) 
        if(getKey())
        {
           OUT_PORT(Out)->GEN(evKey(keyNr));
        }
        //#]
        Checking_timeout = scheduleTimeout(100, NULL);
    }
}

IOxfReactive::TakeEventStatus Key::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Checking:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Checking_timeout)
                        {
                            if(Checking_timeout != NULL)
                                {
                                    Checking_timeout->cancel();
                                    Checking_timeout = NULL;
                                }
                            rootState_subState = Checking;
                            rootState_active = Checking;
                            //#[ state ROOT.Checking.(Entry) 
                            if(getKey())
                            {
                               OUT_PORT(Out)->GEN(evKey(keyNr));
                            }
                            //#]
                            Checking_timeout = scheduleTimeout(100, NULL);
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
	File Path	: PhytecTest/PhytecConfig/Key.cpp
*********************************************************************/
