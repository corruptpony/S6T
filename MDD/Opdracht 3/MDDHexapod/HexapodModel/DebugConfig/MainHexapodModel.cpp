/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: DebugConfig
//!	Generated Date	: Tue, 11, Apr 2017  
	File Path	: HexapodModel/DebugConfig/MainHexapodModel.cpp
*********************************************************************/

//## auto_generated
#include "MainHexapodModel.h"
//## auto_generated
#include "Design.h"
//## auto_generated
#include "Test.h"
//## auto_generated
#include "HexapodFirmware.h"
HexapodModel::HexapodModel() {
    Test_initRelations();
    Test_startBehavior();
}

int main(int argc, char* argv[]) {
    if(OXF::initialize(argc, argv, 6423, "VMWARE"))
        {
            HexapodFirmware * p_HexapodFirmware;
            HexapodModel initializer_HexapodModel;
            p_HexapodFirmware = new HexapodFirmware;
            p_HexapodFirmware->startBehavior();
            //#[ configuration HexapodModel::DebugConfig 
            //#]
            OXF::start();
            delete p_HexapodFirmware;
            return 0;
        }
    else
        {
            return 1;
        }
}

/*********************************************************************
	File Path	: HexapodModel/DebugConfig/MainHexapodModel.cpp
*********************************************************************/
