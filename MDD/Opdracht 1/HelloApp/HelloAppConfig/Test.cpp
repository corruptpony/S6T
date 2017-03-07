/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: Test
//!	Generated Date	: Tue, 14, Feb 2017  
	File Path	: HelloApp/HelloAppConfig/Test.cpp
*********************************************************************/

//## auto_generated
#include "Test.h"
//## classInstance itsDisplay
#include "Display.h"
//## package Test


void Test_initRelations() {
    {
        {
            itsDisplay.setShouldDelete(false);
        }
    }
}

//## classInstance itsDisplay
Display itsDisplay;

bool Test_startBehavior() {
    bool done = true;
    done &= itsDisplay.startBehavior();
    return done;
}

//#[ ignore
Test_OMInitializer::Test_OMInitializer() {
    Test_initRelations();
    Test_startBehavior();
}

Test_OMInitializer::~Test_OMInitializer() {
}
//#]

/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/Test.cpp
*********************************************************************/
