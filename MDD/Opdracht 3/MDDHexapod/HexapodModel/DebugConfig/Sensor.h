/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Sensor
//!	Generated Date	: Fri, 21, Apr 2017  
	File Path	: HexapodModel/DebugConfig/Sensor.h
*********************************************************************/

#ifndef Sensor_H
#define Sensor_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "Design.h"
//## class Sensor
#include "ISensorCB.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## package Design

//## class Sensor
class Sensor : public ISensorCB {
public :

//#[ ignore
    //## package Design
    class b_C {
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
            b_C* getPort() const;
            
            //## auto_generated
            void setPort(b_C* p_b_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            b_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(b_C* p_b_C);
            
            //## auto_generated
            void _setPort(b_C* p_b_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public ISensorCB {
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
            OMReactive* getItsISensorCB() const;
            
            //## auto_generated
            void setItsISensorCB(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsISensorCB;		//## link itsISensorCB
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        b_C();
        
        //## auto_generated
        virtual ~b_C();
        
        ////    Operations    ////
        
        //## operation connectSensor(Sensor*)
        void connectSensor(Sensor* part);
        
        //## operation getItsISensorCB()
        ISensorCB* getItsISensorCB();
        
        //## operation setItsISensorCB(OMReactive*)
        void setItsISensorCB(OMReactive* p_ISensorCB);
        
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
    
    //## operation Sensor()
    Sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Sensor();
    
    ////    Operations    ////

private :

    //## operation isAlarm()
    RhpBoolean isAlarm();
    
    //## operation isClear()
    RhpBoolean isClear();
    
    ////    Additional operations    ////

public :

    //## auto_generated
    b_C* getB() const;
    
    //## auto_generated
    b_C* get_b() const;
    
    //## auto_generated
    b_C* newB();
    
    //## auto_generated
    void deleteB();
    
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
    b_C* b;
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
    
    // sendaction_6:
    //## statechart_method
    inline bool sendaction_6_IN() const;
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // clear:
    //## statechart_method
    inline bool clear_IN() const;
    
    // alarm:
    //## statechart_method
    inline bool alarm_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Sensor_Enum {
        OMNonState = 0,
        sendaction_6 = 1,
        sendaction_2 = 2,
        clear = 3,
        alarm = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* clear_timeout;
    
    IOxfTimeout* alarm_timeout;
//#]
};

inline bool Sensor::rootState_IN() const {
    return true;
}

inline bool Sensor::sendaction_6_IN() const {
    return rootState_subState == sendaction_6;
}

inline bool Sensor::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool Sensor::clear_IN() const {
    return rootState_subState == clear;
}

inline bool Sensor::alarm_IN() const {
    return rootState_subState == alarm;
}

#endif
/*********************************************************************
	File Path	: HexapodModel/DebugConfig/Sensor.h
*********************************************************************/
