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
        {
            itsDisplay_1.setShouldDelete(false);
        }
    }
}

//## classInstance itsDisplay
Display itsDisplay("Scherm1");

//## classInstance itsDisplay_1
Display itsDisplay_1("Scherm2");

bool Test_startBehavior() {
    bool done = true;
    done &= itsDisplay.startBehavior();
    done &= itsDisplay_1.startBehavior();
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
