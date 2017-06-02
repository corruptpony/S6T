/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: PhytecTest 
	Configuration 	: VirtualConfig
	Model Element	: VirtualConfig
//!	Generated Date	: Fri, 2, Jun 2017  
	File Path	: PhytecTest/VirtualConfig/MainPhytecTest.cpp
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
            //#[ configuration PhytecTest::VirtualConfig 
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
	File Path	: PhytecTest/VirtualConfig/MainPhytecTest.cpp
*********************************************************************/
