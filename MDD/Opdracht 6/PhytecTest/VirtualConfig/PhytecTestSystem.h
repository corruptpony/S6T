/*********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: PhytecTestSystem
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/VirtualConfig/PhytecTestSystem.h
*********************************************************************/

#ifndef PhytecTestSystem_H
#define PhytecTestSystem_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "VirtualDefs.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsController
#include "Controller.h"
//## classInstance itsKey
#include "Key.h"
//## classInstance itsMotor
#include "Motor.h"
//## classInstance itsTacho
#include "Tacho.h"
//## auto_generated
#include <string>
//## auto_generated
#include <iostream>
//## auto_generated
#include <fstream>
//## auto_generated
#include <vector>
//## package Test

//## class PhytecTestSystem
class PhytecTestSystem : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    PhytecTestSystem(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~PhytecTestSystem();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    Key* getItsKey() const;
    
    //## auto_generated
    Key* getItsKey_0() const;
    
    //## auto_generated
    Key* getItsKey_1() const;
    
    //## auto_generated
    Motor* getItsMotor() const;
    
    //## auto_generated
    Tacho* getItsTacho() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    Controller itsController;		//## classInstance itsController
    
    Key itsKey;		//## classInstance itsKey
    
    Key itsKey_0;		//## classInstance itsKey_0
    
    Key itsKey_1;		//## classInstance itsKey_1
    
    Motor itsMotor;		//## classInstance itsMotor
    
    Tacho itsTacho;		//## classInstance itsTacho
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void destroy();
};

#endif
/*********************************************************************
	File Path	: PhytecTest/VirtualConfig/PhytecTestSystem.h
*********************************************************************/
