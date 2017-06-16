/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: Led
//!	Generated Date	: Mon, 12, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/Led.h
*********************************************************************/

#ifndef Led_H
#define Led_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "VirtualDefs.h"
//## auto_generated
#include "Design.h"
//## class Led
#include "iLed.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## package Design

//## class Led
class Led : public iLed {
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
        class InBound_C : public iLed {
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
            iLed* getItsILed() const;
            
            //## auto_generated
            void setItsILed(iLed* p_iLed);
            
            //## auto_generated
            control_C* getPort() const;
            
            //## auto_generated
            void setPort(control_C* p_control_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iLed* itsILed;		//## link itsILed
            
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
        
        //## operation connectLed(Led*)
        void connectLed(Led* part);
        
        //## operation getItsILed()
        iLed* getItsILed();
        
        //## operation setItsILed(iLed*)
        void setItsILed(iLed* p_iLed);
        
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
    
    //## operation Led(RhpString,RhpString)
    Led(const RhpString& ledName, const RhpString& enable, IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    Led(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Led();
    
    ////    Operations    ////
    
    //## operation init()
    void init();
    
    //## operation ledOff()
    void ledOff();
    
    //## operation ledOn()
    void ledOn();
    
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
    bool getBlinkBool() const;
    
    //## auto_generated
    void setBlinkBool(bool p_blinkBool);
    
    //## auto_generated
    RhpString getEnable() const;
    
    //## auto_generated
    void setEnable(RhpString p_enable);
    
    //## auto_generated
    int getInterval() const;
    
    //## auto_generated
    void setInterval(int p_interval);
    
    //## auto_generated
    RhpString getLedName() const;
    
    //## auto_generated
    void setLedName(RhpString p_ledName);
    
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
    
    bool blinkBool;		//## attribute blinkBool
    
    RhpString enable;		//## attribute enable
    
    int interval;		//## attribute interval
    
    RhpString ledName;		//## attribute ledName
    
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
    
    // On:
    //## statechart_method
    inline bool On_IN() const;
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;
    
    // Blink:
    //## statechart_method
    inline bool Blink_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Led_Enum {
        OMNonState = 0,
        On = 1,
        Off = 2,
        Blink = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* Blink_timeout;
//#]
};

inline bool Led::rootState_IN() const {
    return true;
}

inline bool Led::On_IN() const {
    return rootState_subState == On;
}

inline bool Led::Off_IN() const {
    return rootState_subState == Off;
}

inline bool Led::Blink_IN() const {
    return rootState_subState == Blink;
}

#endif
/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/Led.h
*********************************************************************/
