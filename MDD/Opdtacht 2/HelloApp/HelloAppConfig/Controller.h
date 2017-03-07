/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: Controller
//!	Generated Date	: Mon, 6, Mar 2017  
	File Path	: HelloApp/HelloAppConfig/Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "Design.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## class Controller
#include "IControl.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## class OutBound
#include "IDisplay.h"
//## package Design

//## class Controller
class Controller : public OMReactive, public IControl {
public :

//#[ ignore
    //## package Design
    class dsp1_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public IControl {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Additional operations    ////
            
            //## auto_generated
            IControl* getItsIControl() const;
            
            //## auto_generated
            void setItsIControl(IControl* p_IControl);
            
            //## auto_generated
            dsp1_C* getPort() const;
            
            //## auto_generated
            void setPort(dsp1_C* p_dsp1_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IControl* itsIControl;		//## link itsIControl
            
            dsp1_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(dsp1_C* p_dsp1_C);
            
            //## auto_generated
            void _setPort(dsp1_C* p_dsp1_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public IDisplay {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
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
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        dsp1_C();
        
        //## auto_generated
        virtual ~dsp1_C();
        
        ////    Operations    ////
        
        //## operation connectController(Controller*)
        void connectController(Controller* part);
        
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
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
    };
    
    //## package Design
    class dsp2_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public IControl {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Additional operations    ////
            
            //## auto_generated
            IControl* getItsIControl() const;
            
            //## auto_generated
            void setItsIControl(IControl* p_IControl);
            
            //## auto_generated
            dsp2_C* getPort() const;
            
            //## auto_generated
            void setPort(dsp2_C* p_dsp2_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IControl* itsIControl;		//## link itsIControl
            
            dsp2_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(dsp2_C* p_dsp2_C);
            
            //## auto_generated
            void _setPort(dsp2_C* p_dsp2_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public IDisplay {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
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
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        dsp2_C();
        
        //## auto_generated
        virtual ~dsp2_C();
        
        ////    Operations    ////
        
        //## operation connectController(Controller*)
        void connectController(Controller* part);
        
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
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Controller(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Controller();
    
    ////    Operations    ////
    
    //## operation Display()
    void Display();
    
    ////    Additional operations    ////
    
    //## auto_generated
    dsp1_C* getDsp1() const;
    
    //## auto_generated
    dsp1_C* get_dsp1() const;
    
    //## auto_generated
    dsp1_C* newDsp1();
    
    //## auto_generated
    void deleteDsp1();
    
    //## auto_generated
    dsp2_C* getDsp2() const;
    
    //## auto_generated
    dsp2_C* get_dsp2() const;
    
    //## auto_generated
    dsp2_C* newDsp2();
    
    //## auto_generated
    void deleteDsp2();
    
    //## auto_generated
    int getCount() const;
    
    //## auto_generated
    void setCount(int p_count);
    
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
    
    int count;		//## attribute count
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////
    
//#[ ignore
    dsp1_C* dsp1;
    
    dsp2_C* dsp2;
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
    
    // stateDisplay:
    //## statechart_method
    inline bool stateDisplay_IN() const;
    
    //## statechart_method
    void stateDisplay_entDef();
    
    //## statechart_method
    virtual void stateDisplay_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus stateDisplay_handleEvent();
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // state_2:
    //## statechart_method
    inline bool state_2_IN() const;

protected :

//#[ ignore
    enum Controller_Enum {
        OMNonState = 0,
        stateDisplay = 1,
        sendaction_3 = 2,
        state_2 = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int stateDisplay_subState;
    
    IOxfTimeout* stateDisplay_timeout;
//#]
};

inline bool Controller::rootState_IN() const {
    return true;
}

inline bool Controller::rootState_isCompleted() {
    return ( IS_IN(state_2) );
}

inline bool Controller::stateDisplay_IN() const {
    return rootState_subState == stateDisplay;
}

inline bool Controller::sendaction_3_IN() const {
    return stateDisplay_subState == sendaction_3;
}

inline bool Controller::state_2_IN() const {
    return rootState_subState == state_2;
}

#endif
/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/Controller.h
*********************************************************************/
