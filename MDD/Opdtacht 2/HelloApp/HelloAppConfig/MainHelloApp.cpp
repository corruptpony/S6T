/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: HelloAppConfig
//!	Generated Date	: Mon, 20, Feb 2017  
	File Path	: HelloApp/HelloAppConfig/MainHelloApp.cpp
*********************************************************************/

//## auto_generated
#include "MainHelloApp.h"
//## auto_generated
#include "Design.h"
//## auto_generated
#include "Test.h"
//## auto_generated
#include "Application.h"
HelloApp::HelloApp() {
    Test_initRelations();
    Test_startBehavior();
}

int main(int argc, char* argv[]) {
    if(OXF::initialize(argc, argv, 6423, "VMWARE"))
        {
            Application * p_Application;
            HelloApp initializer_HelloApp;
            p_Application = new Application;
            //#[ configuration HelloApp::HelloAppConfig 
            //#]
            OXF::start();
            delete p_Application;
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
