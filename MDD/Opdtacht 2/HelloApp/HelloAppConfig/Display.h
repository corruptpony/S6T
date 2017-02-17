/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: Display
//!	Generated Date	: Tue, 14, Feb 2017  
	File Path	: HelloApp/HelloAppConfig/Display.h
*********************************************************************/

#ifndef Display_H
#define Display_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## class InBound
#include "IDisplay.h"
//## class OutBound
#include "IControl.h"
//## package Analyse

//## class Display
class Display : public OMReactive {
public :

//#[ ignore
    //## package Analyse
    class ctl_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Analyse
        class InBound_C : public IDisplay {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Additional operations    ////
            
            //## auto_generated
            IDisplay* getItsIDisplay() const;
            
            //## auto_generated
            void setItsIDisplay(IDisplay* p_IDisplay);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IDisplay* itsIDisplay;		//## link itsIDisplay
        };
        
        //## package Analyse
        class OutBound_C : public IControl {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
            ////    Additional operations    ////
            
            //## auto_generated
            IControl* getItsIControl() const;
            
            //## auto_generated
            void setItsIControl(IControl* p_IControl);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IControl* itsIControl;		//## link itsIControl
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        ctl_C();
        
        //## auto_generated
        virtual ~ctl_C();
        
        ////    Operations    ////
        
        //## operation connectDisplay(Display*)
        void connectDisplay(Display* part);
        
        //## operation getItsIControl()
        IControl* getItsIControl();
        
        //## operation getItsIDisplay()
        IDisplay* getItsIDisplay();
        
        //## operation setItsIControl(IControl*)
        void setItsIControl(IControl* p_IControl);
        
        //## operation setItsIDisplay(IDisplay*)
        void setItsIDisplay(IDisplay* p_IDisplay);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound() const;
        
        //## auto_generated
        OutBound_C* getOutBound() const;
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ~Display();
    
    ////    Operations    ////
    
    //## operation print(RhpString)
    void print(const RhpString& message);
    
    ////    Additional operations    ////
    
    //## auto_generated
    RhpString getName() const;
    
    //## auto_generated
    void setName(RhpString p_name);
    
    ////    Attributes    ////

protected :

    RhpString name;		//## attribute name

public :

    //## operation Display(RhpString)
    Display(const RhpString& itsname, IOxfActive* theActiveContext = 0);
    
    //## operation AmIDone()
    bool AmIDone();
    
    //## auto_generated
    int getCount() const;
    
    //## auto_generated
    void setCount(int p_count);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    int count;		//## attribute count

public :

    //## auto_generated
    Display(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ctl_C* getCtl() const;
    
    //## auto_generated
    ctl_C* get_ctl() const;
    
    //## auto_generated
    ctl_C* newCtl();
    
    //## auto_generated
    void deleteCtl();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
//#[ ignore
    ctl_C* ctl;
//#]

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // stateWorld:
    //## statechart_method
    inline bool stateWorld_IN() const;
    
    // stateHello:
    //## statechart_method
    inline bool stateHello_IN() const;
    
    // state_2:
    //## statechart_method
    inline bool state_2_IN() const;

protected :

//#[ ignore
    enum Display_Enum {
        OMNonState = 0,
        stateWorld = 1,
        stateHello = 2,
        state_2 = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* stateWorld_timeout;
    
    IOxfTimeout* stateHello_timeout;
//#]
};

inline bool Display::rootState_IN() const {
    return true;
}

inline bool Display::rootState_isCompleted() {
    return ( IS_IN(state_2) );
}

inline bool Display::stateWorld_IN() const {
    return rootState_subState == stateWorld;
}

inline bool Display::stateHello_IN() const {
    return rootState_subState == stateHello;
}

inline bool Display::state_2_IN() const {
    return rootState_subState == state_2;
}

#endif
/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/Display.h
*********************************************************************/
