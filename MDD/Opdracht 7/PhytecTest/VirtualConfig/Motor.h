/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: Motor
//!	Generated Date	: Mon, 12, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/Motor.h
*********************************************************************/

#ifndef Motor_H
#define Motor_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "VirtualDefs.h"
//## auto_generated
#include "DesignMotor.h"
//## class Motor
#include "iMotor.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## package DesignMotor

//## class Motor
class Motor : public iMotor {
public :

//#[ ignore
    //## package DesignMotor
    class control_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package DesignMotor
        class InBound_C : public iMotor {
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
            iMotor* getItsIMotor() const;
            
            //## auto_generated
            void setItsIMotor(iMotor* p_iMotor);
            
            //## auto_generated
            control_C* getPort() const;
            
            //## auto_generated
            void setPort(control_C* p_control_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iMotor* itsIMotor;		//## link itsIMotor
            
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
        
        //## package DesignMotor
        class OutBound_C {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        control_C();
        
        //## auto_generated
        virtual ~control_C();
        
        ////    Operations    ////
        
        //## operation connectMotor(Motor*)
        void connectMotor(Motor* part);
        
        //## operation getItsIMotor()
        iMotor* getItsIMotor();
        
        //## operation setItsIMotor(iMotor*)
        void setItsIMotor(iMotor* p_iMotor);
        
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
    Motor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Motor();
    
    ////    Operations    ////
    
    //## operation setSpeed(int)
    void setSpeed(int speed);
    
    //## operation speedDown()
    void speedDown();
    
    //## operation speedUp()
    void speedUp();
    
    //## operation startMotor()
    void startMotor();
    
    //## operation stopMotor()
    void stopMotor();
    
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
    int getDirection() const;
    
    //## auto_generated
    void setDirection(int p_direction);
    
    //## auto_generated
    int getDuty() const;
    
    //## auto_generated
    void setDuty(int p_duty);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int direction;		//## attribute direction
    
    int duty;		//## attribute duty
    
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
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    // Active:
    //## statechart_method
    inline bool Active_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Motor_Enum {
        OMNonState = 0,
        Idle = 1,
        Active = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Motor::rootState_IN() const {
    return true;
}

inline bool Motor::Idle_IN() const {
    return rootState_subState == Idle;
}

inline bool Motor::Active_IN() const {
    return rootState_subState == Active;
}

#endif
/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/Motor.h
*********************************************************************/
