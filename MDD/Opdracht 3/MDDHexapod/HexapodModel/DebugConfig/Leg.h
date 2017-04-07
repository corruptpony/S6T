/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Leg
//!	Generated Date	: Fri, 7, Apr 2017  
	File Path	: HexapodModel/DebugConfig/Leg.h
*********************************************************************/

#ifndef Leg_H
#define Leg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "Design.h"
//## class Leg
#include "ILeg.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## class OutBound
#include "ILegCB.h"
//## package Design

//## class Leg
class Leg : public ILeg {
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
            b_C* getPort() const;
            
            //## auto_generated
            void setPort(b_C* p_b_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ILeg* itsILeg;		//## link itsILeg
            
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
        b_C();
        
        //## auto_generated
        virtual ~b_C();
        
        ////    Operations    ////
        
        //## operation connectLeg(Leg*)
        void connectLeg(Leg* part);
        
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
    
    //## operation Leg(int)
    Leg(int number, IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    Leg(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Leg();
    
    ////    Operations    ////

private :

    //## operation delay()
    int delay();
    
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
    int getNumber() const;
    
    //## auto_generated
    void setNumber(int p_number);
    
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
    
    int number;		//## attribute number
    
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
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // stiffened:
    //## statechart_method
    inline bool stiffened_IN() const;
    
    //## statechart_method
    void stiffened_entDef();
    
    //## statechart_method
    void stiffened_entHist();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus stiffened_handleEvent();
    
    // standing:
    //## statechart_method
    inline bool standing_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus standing_handleEvent();
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus sendaction_2_handleEvent();
    
    // moving:
    //## statechart_method
    inline bool moving_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus moving_handleEvent();
    
    // relaxed:
    //## statechart_method
    inline bool relaxed_IN() const;
    
    // frozen:
    //## statechart_method
    inline bool frozen_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Leg_Enum {
        OMNonState = 0,
        stiffened = 1,
        standing = 2,
        sendaction_2 = 3,
        moving = 4,
        relaxed = 5,
        frozen = 6
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int stiffened_subState;
    
    int stiffened_lastState;
    
    IOxfTimeout* moving_timeout;
//#]
};

inline bool Leg::rootState_IN() const {
    return true;
}

inline bool Leg::stiffened_IN() const {
    return rootState_subState == stiffened;
}

inline bool Leg::standing_IN() const {
    return stiffened_subState == standing;
}

inline bool Leg::sendaction_2_IN() const {
    return stiffened_subState == sendaction_2;
}

inline bool Leg::moving_IN() const {
    return stiffened_subState == moving;
}

inline bool Leg::relaxed_IN() const {
    return rootState_subState == relaxed;
}

inline bool Leg::frozen_IN() const {
    return rootState_subState == frozen;
}

#endif
/*********************************************************************
	File Path	: HexapodModel/DebugConfig/Leg.h
*********************************************************************/
