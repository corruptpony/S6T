/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: HelloAppConfig
//!	Generated Date	: Tue, 14, Feb 2017  
	File Path	: HelloApp/HelloAppConfig/MainHelloApp.cpp
*********************************************************************/

//## auto_generated
#include "MainHelloApp.h"
//## auto_generated
#include "Application.h"
int main(int argc, char* argv[]) {
    if(OXF::initialize(argc, argv, 6423, "VMWARE"))
        {
            Application * p_Application;
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
