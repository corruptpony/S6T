/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 13, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "VirtualDefs.h"
//## auto_generated
#include "Design.h"
//## class Controller
#include "iKeyCB.h"
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
//## class OutBound
#include "iTacho.h"
//## class OutBound
#include "iLed.h"
//## package Design

//## class Controller
class Controller : public iTachoCB, public iKeyCB {
public :

//#[ ignore
    //## package Design
    class m_control_C {
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
            m_control_C* getPort() const;
            
            //## auto_generated
            void setPort(m_control_C* p_m_control_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            m_control_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(m_control_C* p_m_control_C);
            
            //## auto_generated
            void _setPort(m_control_C* p_m_control_C);
            
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
        m_control_C();
        
        //## auto_generated
        virtual ~m_control_C();
        
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
    class t_control_C {
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
            t_control_C* getPort() const;
            
            //## auto_generated
            void setPort(t_control_C* p_t_control_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iTachoCB* itsITachoCB;		//## link itsITachoCB
            
            t_control_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(t_control_C* p_t_control_C);
            
            //## auto_generated
            void _setPort(t_control_C* p_t_control_C);
            
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
        t_control_C();
        
        //## auto_generated
        virtual ~t_control_C();
        
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
    class k_in_C {
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
            k_in_C* getPort() const;
            
            //## auto_generated
            void setPort(k_in_C* p_k_in_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iKeyCB* itsIKeyCB;		//## link itsIKeyCB
            
            k_in_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(k_in_C* p_k_in_C);
            
            //## auto_generated
            void _setPort(k_in_C* p_k_in_C);
            
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
        k_in_C();
        
        //## auto_generated
        virtual ~k_in_C();
        
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
    
    //## package Design
    class l1_C {
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
            l1_C* getPort() const;
            
            //## auto_generated
            void setPort(l1_C* p_l1_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            l1_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(l1_C* p_l1_C);
            
            //## auto_generated
            void _setPort(l1_C* p_l1_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public iLed {
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
            OMReactive* getItsILed() const;
            
            //## auto_generated
            void setItsILed(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsILed;		//## link itsILed
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        l1_C();
        
        //## auto_generated
        virtual ~l1_C();
        
        ////    Operations    ////
        
        //## operation connectController(Controller*)
        void connectController(Controller* part);
        
        //## operation getItsILed()
        iLed* getItsILed();
        
        //## operation setItsILed(OMReactive*)
        void setItsILed(OMReactive* p_iLed);
        
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
    class l2_C {
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
            l2_C* getPort() const;
            
            //## auto_generated
            void setPort(l2_C* p_l2_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            l2_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(l2_C* p_l2_C);
            
            //## auto_generated
            void _setPort(l2_C* p_l2_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public iLed {
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
            OMReactive* getItsILed() const;
            
            //## auto_generated
            void setItsILed(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsILed;		//## link itsILed
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        l2_C();
        
        //## auto_generated
        virtual ~l2_C();
        
        ////    Operations    ////
        
        //## operation connectController(Controller*)
        void connectController(Controller* part);
        
        //## operation getItsILed()
        iLed* getItsILed();
        
        //## operation setItsILed(OMReactive*)
        void setItsILed(OMReactive* p_iLed);
        
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
    class l3_C {
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
            l3_C* getPort() const;
            
            //## auto_generated
            void setPort(l3_C* p_l3_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            l3_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(l3_C* p_l3_C);
            
            //## auto_generated
            void _setPort(l3_C* p_l3_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public iLed {
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
            OMReactive* getItsILed() const;
            
            //## auto_generated
            void setItsILed(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsILed;		//## link itsILed
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        l3_C();
        
        //## auto_generated
        virtual ~l3_C();
        
        ////    Operations    ////
        
        //## operation connectController(Controller*)
        void connectController(Controller* part);
        
        //## operation getItsILed()
        iLed* getItsILed();
        
        //## operation setItsILed(OMReactive*)
        void setItsILed(OMReactive* p_iLed);
        
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
    
    ////    Operations    ////
    
    //## operation init()
    void init();
    
    //## operation rampDown(int)
    void rampDown(int count);
    
    //## operation rampUp(int)
    void rampUp(int count);
    
    //## operation setBlink()
    void setBlink();
    
    //## operation setLed(int)
    void setLed(int on);
    
    ////    Additional operations    ////
    
    //## auto_generated
    m_control_C* getM_control() const;
    
    //## auto_generated
    m_control_C* get_m_control() const;
    
    //## auto_generated
    m_control_C* newM_control();
    
    //## auto_generated
    void deleteM_control();
    
    //## auto_generated
    t_control_C* getT_control() const;
    
    //## auto_generated
    t_control_C* get_t_control() const;
    
    //## auto_generated
    t_control_C* newT_control();
    
    //## auto_generated
    void deleteT_control();
    
    //## auto_generated
    k_in_C* getK_in() const;
    
    //## auto_generated
    k_in_C* get_k_in() const;
    
    //## auto_generated
    k_in_C* newK_in();
    
    //## auto_generated
    void deleteK_in();
    
    //## auto_generated
    l1_C* getL1() const;
    
    //## auto_generated
    l1_C* get_l1() const;
    
    //## auto_generated
    l1_C* newL1();
    
    //## auto_generated
    void deleteL1();
    
    //## auto_generated
    l2_C* getL2() const;
    
    //## auto_generated
    l2_C* get_l2() const;
    
    //## auto_generated
    l2_C* newL2();
    
    //## auto_generated
    void deleteL2();
    
    //## auto_generated
    l3_C* getL3() const;
    
    //## auto_generated
    l3_C* get_l3() const;
    
    //## auto_generated
    l3_C* newL3();
    
    //## auto_generated
    void deleteL3();
    
    //## auto_generated
    int getCounter() const;
    
    //## auto_generated
    void setCounter(int p_counter);
    
    //## auto_generated
    int getFloorNr() const;
    
    //## auto_generated
    void setFloorNr(int p_floorNr);
    
    //## auto_generated
    int getFullSpeedRotations() const;
    
    //## auto_generated
    void setFullSpeedRotations(int p_fullSpeedRotations);
    
    //## auto_generated
    int getNewFloor() const;
    
    //## auto_generated
    void setNewFloor(int p_newFloor);
    
    //## auto_generated
    int getRampCount() const;
    
    //## auto_generated
    void setRampCount(int p_rampCount);
    
    //## auto_generated
    int getRampUpRotations() const;
    
    //## auto_generated
    void setRampUpRotations(int p_rampUpRotations);
    
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
    
    int counter;		//## attribute counter
    
    int floorNr;		//## attribute floorNr
    
    int fullSpeedRotations;		//## attribute fullSpeedRotations
    
    int newFloor;		//## attribute newFloor
    
    int rampCount;		//## attribute rampCount
    
    int rampUpRotations;		//## attribute rampUpRotations
    
    ////    Relations and components    ////
    
//#[ ignore
    m_control_C* m_control;
    
    t_control_C* t_control;
    
    k_in_C* k_in;
    
    l1_C* l1;
    
    l2_C* l2;
    
    l3_C* l3;
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
    
    // moving:
    //## statechart_method
    inline bool moving_IN() const;
    
    //## statechart_method
    inline bool moving_isCompleted();
    
    //## statechart_method
    void moving_entDef();
    
    //## statechart_method
    void moving_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus moving_handleEvent();
    
    // terminate:
    //## statechart_method
    inline bool terminate_IN() const;
    
    // RampUp:
    //## statechart_method
    inline bool RampUp_IN() const;
    
    // RampDown:
    //## statechart_method
    inline bool RampDown_IN() const;
    
    // FullSpeed:
    //## statechart_method
    inline bool FullSpeed_IN() const;
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Idle_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Controller_Enum {
        OMNonState = 0,
        sendaction_7 = 1,
        sendaction_6 = 2,
        moving = 3,
        terminate = 4,
        RampUp = 5,
        RampDown = 6,
        FullSpeed = 7,
        Idle = 8
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int moving_subState;
    
    IOxfTimeout* Idle_timeout;
//#]
};

inline bool Controller::rootState_IN() const {
    return true;
}

inline bool Controller::sendaction_7_IN() const {
    return rootState_subState == sendaction_7;
}

inline bool Controller::sendaction_6_IN() const {
    return rootState_subState == sendaction_6;
}

inline bool Controller::moving_IN() const {
    return rootState_subState == moving;
}

inline bool Controller::moving_isCompleted() {
    return ( IS_IN(terminate) );
}

inline bool Controller::terminate_IN() const {
    return moving_subState == terminate;
}

inline bool Controller::RampUp_IN() const {
    return moving_subState == RampUp;
}

inline bool Controller::RampDown_IN() const {
    return moving_subState == RampDown;
}

inline bool Controller::FullSpeed_IN() const {
    return moving_subState == FullSpeed;
}

inline bool Controller::Idle_IN() const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/Controller.h
*********************************************************************/
