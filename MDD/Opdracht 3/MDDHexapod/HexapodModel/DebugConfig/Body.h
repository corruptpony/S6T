/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Body
//!	Generated Date	: Fri, 21, Apr 2017  
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
//## class Body
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

//## class Body
class Body : public ILegCB, public ILeg, public ISensorCB {
public :

//#[ ignore
    //## package Design
    class LegPort_1_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public ILegCB {
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
            ILegCB* getItsILegCB() const;
            
            //## auto_generated
            void setItsILegCB(ILegCB* p_ILegCB);
            
            //## auto_generated
            LegPort_1_C* getPort() const;
            
            //## auto_generated
            void setPort(LegPort_1_C* p_LegPort_1_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ILegCB* itsILegCB;		//## link itsILegCB
            
            LegPort_1_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(LegPort_1_C* p_LegPort_1_C);
            
            //## auto_generated
            void _setPort(LegPort_1_C* p_LegPort_1_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public ILeg {
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
            OMReactive* getItsILeg() const;
            
            //## auto_generated
            void setItsILeg(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsILeg;		//## link itsILeg
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        LegPort_1_C();
        
        //## auto_generated
        virtual ~LegPort_1_C();
        
        ////    Operations    ////
        
        //## operation connectBody(Body*)
        void connectBody(Body* part);
        
        //## operation getItsILeg()
        ILeg* getItsILeg();
        
        //## operation getItsILegCB()
        ILegCB* getItsILegCB();
        
        //## operation setItsILeg(OMReactive*)
        void setItsILeg(OMReactive* p_ILeg);
        
        //## operation setItsILegCB(ILegCB*)
        void setItsILegCB(ILegCB* p_ILegCB);
        
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
    class LegPort_2_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public ILegCB {
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
            ILegCB* getItsILegCB() const;
            
            //## auto_generated
            void setItsILegCB(ILegCB* p_ILegCB);
            
            //## auto_generated
            LegPort_2_C* getPort() const;
            
            //## auto_generated
            void setPort(LegPort_2_C* p_LegPort_2_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ILegCB* itsILegCB;		//## link itsILegCB
            
            LegPort_2_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(LegPort_2_C* p_LegPort_2_C);
            
            //## auto_generated
            void _setPort(LegPort_2_C* p_LegPort_2_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public ILeg {
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
            OMReactive* getItsILeg() const;
            
            //## auto_generated
            void setItsILeg(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsILeg;		//## link itsILeg
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        LegPort_2_C();
        
        //## auto_generated
        virtual ~LegPort_2_C();
        
        ////    Operations    ////
        
        //## operation connectBody(Body*)
        void connectBody(Body* part);
        
        //## operation getItsILeg()
        ILeg* getItsILeg();
        
        //## operation getItsILegCB()
        ILegCB* getItsILegCB();
        
        //## operation setItsILeg(OMReactive*)
        void setItsILeg(OMReactive* p_ILeg);
        
        //## operation setItsILegCB(ILegCB*)
        void setItsILegCB(ILegCB* p_ILegCB);
        
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
    class sensorPort_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public ISensorCB {
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
            ISensorCB* getItsISensorCB() const;
            
            //## auto_generated
            void setItsISensorCB(ISensorCB* p_ISensorCB);
            
            //## auto_generated
            sensorPort_C* getPort() const;
            
            //## auto_generated
            void setPort(sensorPort_C* p_sensorPort_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ISensorCB* itsISensorCB;		//## link itsISensorCB
            
            sensorPort_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(sensorPort_C* p_sensorPort_C);
            
            //## auto_generated
            void _setPort(sensorPort_C* p_sensorPort_C);
            
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
        sensorPort_C();
        
        //## auto_generated
        virtual ~sensorPort_C();
        
        ////    Operations    ////
        
        //## operation connectBody(Body*)
        void connectBody(Body* part);
        
        //## operation getItsISensorCB()
        ISensorCB* getItsISensorCB();
        
        //## operation setItsISensorCB(ISensorCB*)
        void setItsISensorCB(ISensorCB* p_ISensorCB);
        
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
    class LegPort_3_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public ILegCB {
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
            ILegCB* getItsILegCB() const;
            
            //## auto_generated
            void setItsILegCB(ILegCB* p_ILegCB);
            
            //## auto_generated
            LegPort_3_C* getPort() const;
            
            //## auto_generated
            void setPort(LegPort_3_C* p_LegPort_3_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ILegCB* itsILegCB;		//## link itsILegCB
            
            LegPort_3_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(LegPort_3_C* p_LegPort_3_C);
            
            //## auto_generated
            void _setPort(LegPort_3_C* p_LegPort_3_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public ILeg {
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
            OMReactive* getItsILeg() const;
            
            //## auto_generated
            void setItsILeg(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsILeg;		//## link itsILeg
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        LegPort_3_C();
        
        //## auto_generated
        virtual ~LegPort_3_C();
        
        ////    Operations    ////
        
        //## operation connectBody(Body*)
        void connectBody(Body* part);
        
        //## operation getItsILeg()
        ILeg* getItsILeg();
        
        //## operation getItsILegCB()
        ILegCB* getItsILegCB();
        
        //## operation setItsILeg(OMReactive*)
        void setItsILeg(OMReactive* p_ILeg);
        
        //## operation setItsILegCB(ILegCB*)
        void setItsILegCB(ILegCB* p_ILegCB);
        
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
    class LegPort_4_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public ILegCB {
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
            ILegCB* getItsILegCB() const;
            
            //## auto_generated
            void setItsILegCB(ILegCB* p_ILegCB);
            
            //## auto_generated
            LegPort_4_C* getPort() const;
            
            //## auto_generated
            void setPort(LegPort_4_C* p_LegPort_4_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ILegCB* itsILegCB;		//## link itsILegCB
            
            LegPort_4_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(LegPort_4_C* p_LegPort_4_C);
            
            //## auto_generated
            void _setPort(LegPort_4_C* p_LegPort_4_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public ILeg {
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
            OMReactive* getItsILeg() const;
            
            //## auto_generated
            void setItsILeg(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsILeg;		//## link itsILeg
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        LegPort_4_C();
        
        //## auto_generated
        virtual ~LegPort_4_C();
        
        ////    Operations    ////
        
        //## operation connectBody(Body*)
        void connectBody(Body* part);
        
        //## operation getItsILeg()
        ILeg* getItsILeg();
        
        //## operation getItsILegCB()
        ILegCB* getItsILegCB();
        
        //## operation setItsILeg(OMReactive*)
        void setItsILeg(OMReactive* p_ILeg);
        
        //## operation setItsILegCB(ILegCB*)
        void setItsILegCB(ILegCB* p_ILegCB);
        
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
    class LegPort_5_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public ILegCB {
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
            ILegCB* getItsILegCB() const;
            
            //## auto_generated
            void setItsILegCB(ILegCB* p_ILegCB);
            
            //## auto_generated
            LegPort_5_C* getPort() const;
            
            //## auto_generated
            void setPort(LegPort_5_C* p_LegPort_5_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ILegCB* itsILegCB;		//## link itsILegCB
            
            LegPort_5_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(LegPort_5_C* p_LegPort_5_C);
            
            //## auto_generated
            void _setPort(LegPort_5_C* p_LegPort_5_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public ILeg {
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
            OMReactive* getItsILeg() const;
            
            //## auto_generated
            void setItsILeg(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsILeg;		//## link itsILeg
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        LegPort_5_C();
        
        //## auto_generated
        virtual ~LegPort_5_C();
        
        ////    Operations    ////
        
        //## operation connectBody(Body*)
        void connectBody(Body* part);
        
        //## operation getItsILeg()
        ILeg* getItsILeg();
        
        //## operation getItsILegCB()
        ILegCB* getItsILegCB();
        
        //## operation setItsILeg(OMReactive*)
        void setItsILeg(OMReactive* p_ILeg);
        
        //## operation setItsILegCB(ILegCB*)
        void setItsILegCB(ILegCB* p_ILegCB);
        
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
    class LegPort_6_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Design
        class InBound_C : public ILegCB {
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
            ILegCB* getItsILegCB() const;
            
            //## auto_generated
            void setItsILegCB(ILegCB* p_ILegCB);
            
            //## auto_generated
            LegPort_6_C* getPort() const;
            
            //## auto_generated
            void setPort(LegPort_6_C* p_LegPort_6_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ILegCB* itsILegCB;		//## link itsILegCB
            
            LegPort_6_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(LegPort_6_C* p_LegPort_6_C);
            
            //## auto_generated
            void _setPort(LegPort_6_C* p_LegPort_6_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Design
        class OutBound_C : public ILeg {
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
            OMReactive* getItsILeg() const;
            
            //## auto_generated
            void setItsILeg(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsILeg;		//## link itsILeg
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        LegPort_6_C();
        
        //## auto_generated
        virtual ~LegPort_6_C();
        
        ////    Operations    ////
        
        //## operation connectBody(Body*)
        void connectBody(Body* part);
        
        //## operation getItsILeg()
        ILeg* getItsILeg();
        
        //## operation getItsILegCB()
        ILegCB* getItsILegCB();
        
        //## operation setItsILeg(OMReactive*)
        void setItsILeg(OMReactive* p_ILeg);
        
        //## operation setItsILegCB(ILegCB*)
        void setItsILegCB(ILegCB* p_ILegCB);
        
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
    LegPort_1_C* getLegPort_1() const;
    
    //## auto_generated
    LegPort_1_C* get_LegPort_1() const;
    
    //## auto_generated
    LegPort_1_C* newLegPort_1();
    
    //## auto_generated
    void deleteLegPort_1();
    
    //## auto_generated
    LegPort_2_C* getLegPort_2() const;
    
    //## auto_generated
    LegPort_2_C* get_LegPort_2() const;
    
    //## auto_generated
    LegPort_2_C* newLegPort_2();
    
    //## auto_generated
    void deleteLegPort_2();
    
    //## auto_generated
    sensorPort_C* getSensorPort() const;
    
    //## auto_generated
    sensorPort_C* get_sensorPort() const;
    
    //## auto_generated
    sensorPort_C* newSensorPort();
    
    //## auto_generated
    void deleteSensorPort();
    
    //## auto_generated
    LegPort_3_C* getLegPort_3() const;
    
    //## auto_generated
    LegPort_3_C* get_LegPort_3() const;
    
    //## auto_generated
    LegPort_3_C* newLegPort_3();
    
    //## auto_generated
    void deleteLegPort_3();
    
    //## auto_generated
    LegPort_4_C* getLegPort_4() const;
    
    //## auto_generated
    LegPort_4_C* get_LegPort_4() const;
    
    //## auto_generated
    LegPort_4_C* newLegPort_4();
    
    //## auto_generated
    void deleteLegPort_4();
    
    //## auto_generated
    LegPort_5_C* getLegPort_5() const;
    
    //## auto_generated
    LegPort_5_C* get_LegPort_5() const;
    
    //## auto_generated
    LegPort_5_C* newLegPort_5();
    
    //## auto_generated
    void deleteLegPort_5();
    
    //## auto_generated
    LegPort_6_C* getLegPort_6() const;
    
    //## auto_generated
    LegPort_6_C* get_LegPort_6() const;
    
    //## auto_generated
    LegPort_6_C* newLegPort_6();
    
    //## auto_generated
    void deleteLegPort_6();
    
    //## auto_generated
    bool getOdd() const;
    
    //## auto_generated
    void setOdd(bool p_odd);
    
    //## auto_generated
    int getReadyCounter() const;
    
    //## auto_generated
    void setReadyCounter(int p_readyCounter);
    
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
    
    bool odd;		//## attribute odd
    
    int readyCounter;		//## attribute readyCounter
    
    ////    Relations and components    ////
    
//#[ ignore
    LegPort_1_C* LegPort_1;
    
    LegPort_2_C* LegPort_2;
    
    sensorPort_C* sensorPort;
    
    LegPort_3_C* LegPort_3;
    
    LegPort_4_C* LegPort_4;
    
    LegPort_5_C* LegPort_5;
    
    LegPort_6_C* LegPort_6;
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
    
    // StiffenEventSender:
    //## statechart_method
    inline bool StiffenEventSender_IN() const;
    
    // Resting:
    //## statechart_method
    inline bool Resting_IN() const;
    
    // RelaxEventSender:
    //## statechart_method
    inline bool RelaxEventSender_IN() const;
    
    // Moving:
    //## statechart_method
    inline bool Moving_IN() const;
    
    //## statechart_method
    void Moving_entDef();
    
    //## statechart_method
    virtual void Moving_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Moving_handleEvent();
    
    // MoveOdd:
    //## statechart_method
    inline bool MoveOdd_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus MoveOdd_handleEvent();
    
    // MoveEven:
    //## statechart_method
    inline bool MoveEven_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus MoveEven_handleEvent();
    
    // Freeze:
    //## statechart_method
    inline bool Freeze_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Freeze_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Body_Enum {
        OMNonState = 0,
        StiffenEventSender = 1,
        Resting = 2,
        RelaxEventSender = 3,
        Moving = 4,
        MoveOdd = 5,
        MoveEven = 6,
        Freeze = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* Resting_timeout;
    
    int Moving_subState;
    
    IOxfTimeout* Moving_timeout;
//#]
};

inline bool Body::rootState_IN() const {
    return true;
}

inline bool Body::StiffenEventSender_IN() const {
    return rootState_subState == StiffenEventSender;
}

inline bool Body::Resting_IN() const {
    return rootState_subState == Resting;
}

inline bool Body::RelaxEventSender_IN() const {
    return rootState_subState == RelaxEventSender;
}

inline bool Body::Moving_IN() const {
    return rootState_subState == Moving;
}

inline bool Body::MoveOdd_IN() const {
    return Moving_subState == MoveOdd;
}

inline bool Body::MoveEven_IN() const {
    return Moving_subState == MoveEven;
}

inline bool Body::Freeze_IN() const {
    return Moving_subState == Freeze;
}

#endif
/*********************************************************************
	File Path	: HexapodModel/DebugConfig/Body.h
*********************************************************************/
