/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: PhytecConfig
	Model Element	: PhytecConfig
//!	Generated Date	: Mon, 8, May 2017  
	File Path	: PhytecTest/PhytecConfig/MainPhytecTest.cpp
*********************************************************************/

//## auto_generated
#include "MainPhytecTest.h"
//## auto_generated
#include "PhytecTestSystem.h"
int main(int argc, char* argv[]) {
    if(OXF::initialize(argc, argv, 6423, "192.168.3.10"))
        {
            PhytecTestSystem * p_PhytecTestSystem;
            p_PhytecTestSystem = new PhytecTestSystem;
            p_PhytecTestSystem->startBehavior();
            //#[ configuration PhytecTest::PhytecConfig 
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
	File Path	: PhytecTest/PhytecConfig/MainPhytecTest.cpp
*********************************************************************/
