/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: DebugConfig
	Model Element	: Controller
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/DebugConfig/Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "DebugDefs.h"
//## auto_generated
#include "Design.h"
//## class Controller
#include "iKeyCB.h"
//## class Controller
#include "iTacho.h"
//## class Controller
#include "iTachoCB.h"
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
//## package Design

//## class Controller
class Controller : public iTacho, public iTachoCB, public iKeyCB {
public :

//#[ ignore
    //## package Design
    class t_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
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
            t_C* getPort() const;
            
            //## auto_generated
            void setPort(t_C* p_t_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iTachoCB* itsITachoCB;		//## link itsITachoCB
            
            t_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(t_C* p_t_C);
            
            //## auto_generated
            void _setPort(t_C* p_t_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
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
        t_C();
        
        //## auto_generated
        virtual ~t_C();
        
        ////    Operations    ////
        
        //## operation connectController(Controller*)
        void connectController(Controller* part);
        
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
    
    //## package Design
    class m_C {
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
            m_C* getPort() const;
            
            //## auto_generated
            void setPort(m_C* p_m_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            m_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(m_C* p_m_C);
            
            //## auto_generated
            void _setPort(m_C* p_m_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
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
        m_C();
        
        //## auto_generated
        virtual ~m_C();
        
        ////    Operations    ////
        
        //## operation connectController(Controller*)
        void connectController(Controller* part);
        
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
    
    //## package Design
    class k_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public iKeyCB {
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
            iKeyCB* getItsIKeyCB() const;
            
            //## auto_generated
            void setItsIKeyCB(iKeyCB* p_iKeyCB);
            
            //## auto_generated
            k_C* getPort() const;
            
            //## auto_generated
            void setPort(k_C* p_k_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iKeyCB* itsIKeyCB;		//## link itsIKeyCB
            
            k_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(k_C* p_k_C);
            
            //## auto_generated
            void _setPort(k_C* p_k_C);
            
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
        k_C();
        
        //## auto_generated
        virtual ~k_C();
        
        ////    Operations    ////
        
        //## operation connectController(Controller*)
        void connectController(Controller* part);
        
        //## operation getItsIKeyCB()
        iKeyCB* getItsIKeyCB();
        
        //## operation setItsIKeyCB(iKeyCB*)
        void setItsIKeyCB(iKeyCB* p_iKeyCB);
        
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
    Controller(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Controller();
    
    ////    Additional operations    ////
    
    //## auto_generated
    t_C* getT() const;
    
    //## auto_generated
    t_C* get_t() const;
    
    //## auto_generated
    t_C* newT();
    
    //## auto_generated
    void deleteT();
    
    //## auto_generated
    m_C* getM() const;
    
    //## auto_generated
    m_C* get_m() const;
    
    //## auto_generated
    m_C* newM();
    
    //## auto_generated
    void deleteM();
    
    //## auto_generated
    k_C* getK() const;
    
    //## auto_generated
    k_C* get_k() const;
    
    //## auto_generated
    k_C* newK();
    
    //## auto_generated
    void deleteK();
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    t_C* t;
    
    m_C* m;
    
    k_C* k;
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
    enum Controller_Enum {
        OMNonState = 0,
        Running = 1,
        Idle = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Controller::rootState_IN() const {
    return true;
}

inline bool Controller::Running_IN() const {
    return rootState_subState == Running;
}

inline bool Controller::Idle_IN() const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: PhytecTest/DebugConfig/Controller.h
*********************************************************************/
