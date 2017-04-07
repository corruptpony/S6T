/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HexapodModel 
	Configuration 	: DebugConfig
	Model Element	: DebugConfig
//!	Generated Date	: Fri, 7, Apr 2017  
	File Path	: HexapodModel/DebugConfig/MainHexapodModel.cpp
*********************************************************************/

//## auto_generated
#include "MainHexapodModel.h"
//## auto_generated
#include "HexapodFirmware.h"
int main(int argc, char* argv[]) {
    if(OXF::initialize(argc, argv, 6423, "VMWARE"))
        {
            HexapodFirmware * p_HexapodFirmware;
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
