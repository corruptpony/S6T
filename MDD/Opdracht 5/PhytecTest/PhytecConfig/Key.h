/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: PhytecConfig
	Model Element	: Key
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/PhytecConfig/Key.h
*********************************************************************/

#ifndef Key_H
#define Key_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "PhytecDefs.h"
//## auto_generated
#include "Design.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## class OutBound
#include "iKeyCB.h"
//## package Design

//## class Key
class Key : public OMReactive {
public :

//#[ ignore
    //## package Design
    class Out_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Additional operations    ////
            
            //## auto_generated
            Out_C* getPort() const;
            
            //## auto_generated
            void setPort(Out_C* p_Out_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            Out_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(Out_C* p_Out_C);
            
            //## auto_generated
            void _setPort(Out_C* p_Out_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public iKeyCB {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
            ////    Operations    ////
            
            //## operation send(IOxfEvent*,const IOxfEventGenerationParams&)
            bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
            
            //## operation send(IOxfEvent*)
            bool send(IOxfEvent* event);
            
            ////    Additional operations    ////
            
            //## auto_generated
            OMReactive* getItsIKeyCB() const;
            
            //## auto_generated
            void setItsIKeyCB(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsIKeyCB;		//## link itsIKeyCB
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        Out_C();
        
        //## auto_generated
        virtual ~Out_C();
        
        ////    Operations    ////
        
        //## operation connectKey(Key*)
        void connectKey(Key* part);
        
        //## operation getItsIKeyCB()
        iKeyCB* getItsIKeyCB();
        
        //## operation setItsIKeyCB(OMReactive*)
        void setItsIKeyCB(OMReactive* p_iKeyCB);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound() const;
        
        //## auto_generated
        OutBound_C* getOutBound() const;
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
        
        ////    Framework operations    ////
    
    public :
    
        //## auto_generated
        void destroy();
    };
//#]

    ////    Constructors and destructors    ////
    
    //## operation Key(int)
    Key(int Key = 0, IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Key();
    
    ////    Operations    ////
    
    //## operation getKey()
    int getKey();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Out_C* getOut() const;
    
    //## auto_generated
    Out_C* get_Out() const;
    
    //## auto_generated
    Out_C* newOut();
    
    //## auto_generated
    void deleteOut();
    
    //## auto_generated
    int getKeyNr() const;
    
    //## auto_generated
    void setKeyNr(int p_keyNr);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int keyNr;		//## attribute keyNr
    
    ////    Relations and components    ////
    
//#[ ignore
    Out_C* Out;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Checking:
    //## statechart_method
    inline bool Checking_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Key_Enum {
        OMNonState = 0,
        Checking = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* Checking_timeout;
//#]
};

inline bool Key::rootState_IN() const {
    return true;
}

inline bool Key::Checking_IN() const {
    return rootState_subState == Checking;
}

#endif
/*********************************************************************
	File Path	: PhytecTest/PhytecConfig/Key.h
*********************************************************************/
