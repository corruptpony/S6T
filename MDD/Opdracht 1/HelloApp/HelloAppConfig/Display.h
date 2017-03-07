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
//## package Analyse

//## class Display
class Display : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

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

    //## operation Display()
    Display(IOxfActive* theActiveContext = 0);
    
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
