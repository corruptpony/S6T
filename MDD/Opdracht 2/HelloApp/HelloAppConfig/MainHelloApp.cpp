/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: HelloAppConfig
//!	Generated Date	: Mon, 20, Mar 2017  
	File Path	: HelloApp/HelloAppConfig/MainHelloApp.cpp
*********************************************************************/

//## auto_generated
#include "MainHelloApp.h"
//## auto_generated
#include "Design.h"
//## auto_generated
#include "Test.h"
//## auto_generated
#include "DistributedHelloTestSystem.h"
HelloApp::HelloApp() {
    Test_initRelations();
    Test_startBehavior();
}

int main(int argc, char* argv[]) {
    if(OXF::initialize(argc, argv, 6423, "VMWARE"))
        {
            DistributedHelloTestSystem * p_DistributedHelloTestSystem;
            HelloApp initializer_HelloApp;
            p_DistributedHelloTestSystem = new DistributedHelloTestSystem;
            p_DistributedHelloTestSystem->startBehavior();
            //#[ configuration HelloApp::HelloAppConfig 
            //#]
            OXF::start();
            delete p_DistributedHelloTestSystem;
            return 0;
        }
    else
        {
            return 1;
        }
}

/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/MainHelloApp.cpp
*********************************************************************/
