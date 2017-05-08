/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: PhytecConfig
	Model Element	: PhytecTestSystem
//!	Generated Date	: Mon, 8, May 2017  
	File Path	: PhytecTest/PhytecConfig/PhytecTestSystem.h
*********************************************************************/

#ifndef PhytecTestSystem_H
#define PhytecTestSystem_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "PhytecDefs.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsTacho
#include "Tacho.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## class TachoTester
#include "iTachoCB.h"
//## class OutBound
#include "iTacho.h"
//## package Test

//## class PhytecTestSystem
class PhytecTestSystem : public OMReactive {
public :

    //## class PhytecTestSystem::TachoTester
    class TachoTester_C : public iTachoCB {
    public :
    
    //#[ ignore
        //## package Test
        class control_C {
        public :
        
            //## auto_generated
            class InBound_C;
            
            //## auto_generated
            class OutBound_C;
            
            //## package Test
            class InBound_C : public iTachoCB {
                ////    Constructors and destructors    ////
                
            public :
            
                //## auto_generated
                InBound_C();
                
                //## auto_generated
                virtual ~InBound_C();
                
                ////    Operations    ////
                
                //## operation send(IOxfEvent*,const IOxfEventGenerationParams&)
                bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
                
                //## operation send(IOxfEvent*)
                bool send(IOxfEvent* event);
                
                ////    Additional operations    ////
                
                //## auto_generated
                iTachoCB* getItsITachoCB() const;
                
                //## auto_generated
                void setItsITachoCB(iTachoCB* p_iTachoCB);
                
                //## auto_generated
                control_C* getPort() const;
                
                //## auto_generated
                void setPort(control_C* p_control_C);
            
            protected :
            
                //## auto_generated
                void cleanUpRelations();
                
                ////    Relations and components    ////
                
                iTachoCB* itsITachoCB;		//## link itsITachoCB
                
                control_C* port;		//## link port
                
                ////    Framework operations    ////
            
            public :
            
                //## auto_generated
                void __setPort(control_C* p_control_C);
                
                //## auto_generated
                void _setPort(control_C* p_control_C);
                
                //## auto_generated
                void _clearPort();
            };
            
            //## package Test
            class OutBound_C : public iTacho {
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
                OMReactive* getItsITacho() const;
                
                //## auto_generated
                void setItsITacho(OMReactive* p_OMReactive);
            
            protected :
            
                //## auto_generated
                void cleanUpRelations();
                
                ////    Relations and components    ////
                
                OMReactive* itsITacho;		//## link itsITacho
            };
            
            ////    Constructors and destructors    ////
            
            //## auto_generated
            control_C();
            
            //## auto_generated
            virtual ~control_C();
            
            ////    Operations    ////
            
            //## operation connectTachoTester(TachoTester_C*)
            void connectTachoTester(TachoTester_C* part);
            
            //## operation getItsITacho()
            iTacho* getItsITacho();
            
            //## operation getItsITachoCB()
            iTachoCB* getItsITachoCB();
            
            //## operation setItsITacho(OMReactive*)
            void setItsITacho(OMReactive* p_iTacho);
            
            //## operation setItsITachoCB(iTachoCB*)
            void setItsITachoCB(iTachoCB* p_iTachoCB);
            
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
        
        //## auto_generated
        TachoTester_C(IOxfActive* theActiveContext = 0);
        
        //## auto_generated
        ~TachoTester_C();
        
        ////    Additional operations    ////
        
        //## auto_generated
        control_C* getControl() const;
        
        //## auto_generated
        control_C* get_control() const;
        
        //## auto_generated
        control_C* newControl();
        
        //## auto_generated
        void deleteControl();
        
        //## auto_generated
        int getTotalCount() const;
        
        //## auto_generated
        void setTotalCount(int p_totalCount);
        
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
        
        int totalCount;		//## attribute totalCount
        
        ////    Relations and components    ////
        
    //#[ ignore
        control_C* control;
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
        
        // sendaction_4:
        //## statechart_method
        inline bool sendaction_4_IN() const;
        
        // sendaction_3:
        //## statechart_method
        inline bool sendaction_3_IN() const;
        
        // Counting:
        //## statechart_method
        inline bool Counting_IN() const;
        
        ////    Framework    ////
    
    protected :
    
    //#[ ignore
        enum TachoTester_Enum {
            OMNonState = 0,
            sendaction_4 = 1,
            sendaction_3 = 2,
            Counting = 3
        };
        
        int rootState_subState;
        
        int rootState_active;
        
        IOxfTimeout* Counting_timeout;
    //#]
    };
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    PhytecTestSystem(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~PhytecTestSystem();
    
    ////    Additional operations    ////
    
    //## auto_generated
    TachoTester_C* getTachoTester() const;
    
    //## auto_generated
    Tacho* getItsTacho() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    TachoTester_C TachoTester;		//## classInstance TachoTester
    
    Tacho itsTacho;		//## classInstance itsTacho
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void destroy();
};

inline bool PhytecTestSystem::TachoTester_C::rootState_IN() const {
    return true;
}

inline bool PhytecTestSystem::TachoTester_C::sendaction_4_IN() const {
    return rootState_subState == sendaction_4;
}

inline bool PhytecTestSystem::TachoTester_C::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool PhytecTestSystem::TachoTester_C::Counting_IN() const {
    return rootState_subState == Counting;
}

#endif
/*********************************************************************
	File Path	: PhytecTest/PhytecConfig/PhytecTestSystem.h
*********************************************************************/
