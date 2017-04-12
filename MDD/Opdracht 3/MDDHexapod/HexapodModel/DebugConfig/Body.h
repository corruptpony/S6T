/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Body
//!	Generated Date	: Tue, 11, Apr 2017  
	File Path	: HexapodModel/DebugConfig/Body.h
*********************************************************************/

#ifndef Body_H
#define Body_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "Design.h"
//## class Body
#include "ILeg.h"
//## class Body
#include "ILegCB.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## package Design

//## class Body
class Body : public ILegCB, public ILeg {
public :

//#[ ignore
    //## package Design
    class UberPort_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public ILeg {
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
            ILeg* getItsILeg() const;
            
            //## auto_generated
            void setItsILeg(ILeg* p_ILeg);
            
            //## auto_generated
            UberPort_C* getPort() const;
            
            //## auto_generated
            void setPort(UberPort_C* p_UberPort_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ILeg* itsILeg;		//## link itsILeg
            
            UberPort_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(UberPort_C* p_UberPort_C);
            
            //## auto_generated
            void _setPort(UberPort_C* p_UberPort_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public ILegCB {
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
            OMReactive* getItsILegCB() const;
            
            //## auto_generated
            void setItsILegCB(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsILegCB;		//## link itsILegCB
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        UberPort_C();
        
        //## auto_generated
        virtual ~UberPort_C();
        
        ////    Operations    ////
        
        //## operation connectBody(Body*)
        void connectBody(Body* part);
        
        //## operation getItsILeg()
        ILeg* getItsILeg();
        
        //## operation getItsILegCB()
        ILegCB* getItsILegCB();
        
        //## operation setItsILeg(ILeg*)
        void setItsILeg(ILeg* p_ILeg);
        
        //## operation setItsILegCB(OMReactive*)
        void setItsILegCB(OMReactive* p_ILegCB);
        
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
    Body(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Body();
    
    ////    Additional operations    ////
    
    //## auto_generated
    UberPort_C* getUberPort() const;
    
    //## auto_generated
    UberPort_C* get_UberPort() const;
    
    //## auto_generated
    UberPort_C* newUberPort();
    
    //## auto_generated
    void deleteUberPort();
    
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
    UberPort_C* UberPort;
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
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // Resting:
    //## statechart_method
    inline bool Resting_IN() const;
    
    // Moving:
    //## statechart_method
    inline bool Moving_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Body_Enum {
        OMNonState = 0,
        sendaction_3 = 1,
        sendaction_2 = 2,
        Resting = 3,
        Moving = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* Resting_timeout;
    
    IOxfTimeout* Moving_timeout;
//#]
};

inline bool Body::rootState_IN() const {
    return true;
}

inline bool Body::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool Body::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool Body::Resting_IN() const {
    return rootState_subState == Resting;
}

inline bool Body::Moving_IN() const {
    return rootState_subState == Moving;
}

#endif
/*********************************************************************
	File Path	: HexapodModel/DebugConfig/Body.h
*********************************************************************/
