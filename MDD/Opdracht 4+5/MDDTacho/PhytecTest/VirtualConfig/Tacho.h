/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: Tacho
//!	Generated Date	: Mon, 8, May 2017  
	File Path	: PhytecTest/VirtualConfig/Tacho.h
*********************************************************************/

#ifndef Tacho_H
#define Tacho_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "VirtualDefs.h"
//## auto_generated
#include "Design.h"
//## class Tacho
#include "iTacho.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## class OutBound
#include "iTachoCB.h"
//## package Design

//## class Tacho
class Tacho : public iTacho {
public :

//#[ ignore
    //## package Design
    class control_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public iTacho {
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
            iTacho* getItsITacho() const;
            
            //## auto_generated
            void setItsITacho(iTacho* p_iTacho);
            
            //## auto_generated
            control_C* getPort() const;
            
            //## auto_generated
            void setPort(control_C* p_control_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iTacho* itsITacho;		//## link itsITacho
            
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
        
        //## package Design
        class OutBound_C : public iTachoCB {
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
            OMReactive* getItsITachoCB() const;
            
            //## auto_generated
            void setItsITachoCB(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsITachoCB;		//## link itsITachoCB
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        control_C();
        
        //## auto_generated
        virtual ~control_C();
        
        ////    Operations    ////
        
        //## operation connectTacho(Tacho*)
        void connectTacho(Tacho* part);
        
        //## operation getItsITacho()
        iTacho* getItsITacho();
        
        //## operation getItsITachoCB()
        iTachoCB* getItsITachoCB();
        
        //## operation setItsITacho(iTacho*)
        void setItsITacho(iTacho* p_iTacho);
        
        //## operation setItsITachoCB(OMReactive*)
        void setItsITachoCB(OMReactive* p_iTachoCB);
        
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
    Tacho(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Tacho();
    
    ////    Operations    ////
    
    //## operation getCount()
    int getCount();
    
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
    int getInterval() const;
    
    //## auto_generated
    void setInterval(int p_interval);
    
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
    
    int interval;		//## attribute interval
    
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
    
    // Running:
    //## statechart_method
    inline bool Running_IN() const;
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Tacho_Enum {
        OMNonState = 0,
        Running = 1,
        Idle = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* Running_timeout;
//#]
};

inline bool Tacho::rootState_IN() const {
    return true;
}

inline bool Tacho::Running_IN() const {
    return rootState_subState == Running;
}

inline bool Tacho::Idle_IN() const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/Tacho.h
*********************************************************************/
