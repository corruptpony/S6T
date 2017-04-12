/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: Test
//!	Generated Date	: Tue, 11, Apr 2017  
	File Path	: HexapodModel/DebugConfig/Test.cpp
*********************************************************************/

//## auto_generated
#include "Test.h"
//## classInstance itsLeg
#include "Leg.h"
//## auto_generated
#include "HexapodFirmware.h"
//## package Test


void Test_initRelations() {
    {
        {
            itsLeg.setShouldDelete(false);
        }
    }
}

//## classInstance itsLeg
Leg itsLeg;

bool Test_startBehavior() {
    bool done = true;
    done &= itsLeg.startBehavior();
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
	File Path	: HexapodModel/DebugConfig/Test.cpp
*********************************************************************/
