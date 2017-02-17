/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 14, Feb 2017  
	File Path	: HelloApp/HelloAppConfig/Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

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
//## class InBound
#include "IControl.h"
//## class OutBound
#include "IDisplay.h"
//## package Design

//## class Controller
class Controller {
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
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IControl* itsIControl;		//## link itsIControl
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
        
        ////    Attributes    ////
    
    protected :
    
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
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IControl* itsIControl;		//## link itsIControl
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
    Controller();
    
    //## auto_generated
    ~Controller();
    
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

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    dsp1_C* dsp1;
    
    dsp2_C* dsp2;
//#]
};

#endif
/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/Controller.h
*********************************************************************/
