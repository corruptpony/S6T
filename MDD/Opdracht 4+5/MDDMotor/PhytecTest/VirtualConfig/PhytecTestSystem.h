/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: PhytecTestSystem
//!	Generated Date	: Mon, 8, May 2017  
	File Path	: PhytecTest/VirtualConfig/PhytecTestSystem.h
*********************************************************************/

#ifndef PhytecTestSystem_H
#define PhytecTestSystem_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "VirtualDefs.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsMotor
#include "Motor.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## class OutBound
#include "iMotor.h"
//## package Test

//## class PhytecTestSystem
class PhytecTestSystem : public OMReactive {
public :

    //## class PhytecTestSystem::MotorTester
    class MotorTester_C : public OMReactive {
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
            class InBound_C {
                ////    Constructors and destructors    ////
                
            public :
            
                //## auto_generated
                InBound_C();
                
                //## auto_generated
                virtual ~InBound_C();
                
                ////    Additional operations    ////
                
                //## auto_generated
                control_C* getPort() const;
                
                //## auto_generated
                void setPort(control_C* p_control_C);
            
            protected :
            
                //## auto_generated
                void cleanUpRelations();
                
                ////    Relations and components    ////
                
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
            class OutBound_C : public iMotor {
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
                OMReactive* getItsIMotor() const;
                
                //## auto_generated
                void setItsIMotor(OMReactive* p_OMReactive);
            
            protected :
            
                //## auto_generated
                void cleanUpRelations();
                
                ////    Relations and components    ////
                
                OMReactive* itsIMotor;		//## link itsIMotor
            };
            
            ////    Constructors and destructors    ////
            
            //## auto_generated
            control_C();
            
            //## auto_generated
            virtual ~control_C();
            
            ////    Operations    ////
            
            //## operation connectMotorTester(MotorTester_C*)
            void connectMotorTester(MotorTester_C* part);
            
            //## operation getItsIMotor()
            iMotor* getItsIMotor();
            
            //## operation setItsIMotor(OMReactive*)
            void setItsIMotor(OMReactive* p_iMotor);
            
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
        MotorTester_C(IOxfActive* theActiveContext = 0);
        
        //## auto_generated
        ~MotorTester_C();
        
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
        void rootState_exit();
        
        //## statechart_method
        virtual IOxfReactive::TakeEventStatus rootState_processEvent();
        
        // sendaction_7:
        //## statechart_method
        inline bool sendaction_7_IN() const;
        
        // sendaction_6:
        //## statechart_method
        inline bool sendaction_6_IN() const;
        
        // sendaction_5:
        //## statechart_method
        inline bool sendaction_5_IN() const;
        
        // sendaction_4:
        //## statechart_method
        inline bool sendaction_4_IN() const;
        
        // sendaction_3:
        //## statechart_method
        inline bool sendaction_3_IN() const;
        
        // sendaction_2:
        //## statechart_method
        inline bool sendaction_2_IN() const;
        
        // sendaction_1:
        //## statechart_method
        inline bool sendaction_1_IN() const;
        
        ////    Framework    ////
    
    protected :
    
    //#[ ignore
        enum MotorTester_Enum {
            OMNonState = 0,
            sendaction_7 = 1,
            sendaction_6 = 2,
            sendaction_5 = 3,
            sendaction_4 = 4,
            sendaction_3 = 5,
            sendaction_2 = 6,
            sendaction_1 = 7
        };
        
        int rootState_subState;
        
        int rootState_active;
        
        IOxfTimeout* sendaction_7_timeout;
        
        IOxfTimeout* sendaction_6_timeout;
        
        IOxfTimeout* sendaction_5_timeout;
        
        IOxfTimeout* sendaction_4_timeout;
        
        IOxfTimeout* sendaction_3_timeout;
        
        IOxfTimeout* sendaction_2_timeout;
        
        IOxfTimeout* sendaction_1_timeout;
    //#]
    };
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    PhytecTestSystem(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~PhytecTestSystem();
    
    ////    Additional operations    ////
    
    //## auto_generated
    MotorTester_C* getMotorTester() const;
    
    //## auto_generated
    Motor* getItsMotor() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    MotorTester_C MotorTester;		//## classInstance MotorTester
    
    Motor itsMotor;		//## classInstance itsMotor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void destroy();
};

inline bool PhytecTestSystem::MotorTester_C::rootState_IN() const {
    return true;
}

inline bool PhytecTestSystem::MotorTester_C::sendaction_7_IN() const {
    return rootState_subState == sendaction_7;
}

inline bool PhytecTestSystem::MotorTester_C::sendaction_6_IN() const {
    return rootState_subState == sendaction_6;
}

inline bool PhytecTestSystem::MotorTester_C::sendaction_5_IN() const {
    return rootState_subState == sendaction_5;
}

inline bool PhytecTestSystem::MotorTester_C::sendaction_4_IN() const {
    return rootState_subState == sendaction_4;
}

inline bool PhytecTestSystem::MotorTester_C::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool PhytecTestSystem::MotorTester_C::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool PhytecTestSystem::MotorTester_C::sendaction_1_IN() const {
    return rootState_subState == sendaction_1;
}

#endif
/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/PhytecTestSystem.h
*********************************************************************/
