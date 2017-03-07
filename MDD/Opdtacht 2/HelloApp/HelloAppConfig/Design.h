/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: Design
//!	Generated Date	: Mon, 20, Feb 2017  
	File Path	: HelloApp/HelloAppConfig/Design.h
*********************************************************************/

#ifndef Design_H
#define Design_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Controller;

//## auto_generated
class IControl;

//## auto_generated
class IDisplay;

//#[ ignore
#define evPrint_Design_id 28001
//#]

//## package Design



//## event evPrint(int)
class evPrint : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evPrint(int p_seqnr);
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
    
    ////    Framework    ////
    
    int seqnr;		//## statechart_method
};

#endif
/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/Design.h
*********************************************************************/
