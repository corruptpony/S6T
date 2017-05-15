/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: DebugConfig
	Model Element	: DebugConfig
//!	Generated Date	: Mon, 15, May 2017  
	File Path	: PhytecTest/DebugConfig/MainPhytecTest.cpp
*********************************************************************/

//## auto_generated
#include "MainPhytecTest.h"
//## auto_generated
#include "PhytecTestSystem.h"
int main(int argc, char* argv[]) {
    if(OXF::initialize(argc, argv, 6423, "VMWARE"))
        {
            PhytecTestSystem * p_PhytecTestSystem;
            p_PhytecTestSystem = new PhytecTestSystem;
            p_PhytecTestSystem->startBehavior();
            //#[ configuration PhytecTest::DebugConfig 
            //#]
            OXF::start();
            delete p_PhytecTestSystem;
            return 0;
        }
    else
        {
            return 1;
        }
}

/*********************************************************************
	File Path	: PhytecTest/DebugConfig/MainPhytecTest.cpp
*********************************************************************/
