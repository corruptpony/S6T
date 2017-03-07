/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: DistributedHelloTestSystem
//!	Generated Date	: Mon, 6, Mar 2017  
	File Path	: HelloApp/HelloAppConfig/DistributedHelloTestSystem.h
*********************************************************************/

#ifndef DistributedHelloTestSystem_H
#define DistributedHelloTestSystem_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "Test.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsController
#include "Controller.h"
//## classInstance itsDisplay
#include "Display.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## package Test

//## class DistributedHelloTestSystem
class DistributedHelloTestSystem : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DistributedHelloTestSystem(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~DistributedHelloTestSystem();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    Display* getItsDisplay() const;
    
    //## auto_generated
    Display* getItsDisplay_1() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    Controller itsController;		//## classInstance itsController
    
    Display itsDisplay;		//## classInstance itsDisplay
    
    Display itsDisplay_1;		//## classInstance itsDisplay_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void destroy();
};

#endif
/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/DistributedHelloTestSystem.h
*********************************************************************/
