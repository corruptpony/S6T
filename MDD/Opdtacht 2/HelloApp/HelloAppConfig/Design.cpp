/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: Design
//!	Generated Date	: Mon, 20, Mar 2017  
	File Path	: HelloApp/HelloAppConfig/Design.cpp
*********************************************************************/

//## auto_generated
#include "Design.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "IControl.h"
//## auto_generated
#include "IDisplay.h"
//## package Design



//## event evPrint(int)
evPrint::evPrint(int p_seqnr) {
    setId(evPrint_Design_id);
    seqnr = p_seqnr;
}

bool evPrint::isTypeOf(short id) const {
    if(evPrint_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

//## event evDone()
evDone::evDone() {
    setId(evDone_Design_id);
}

bool evDone::isTypeOf(short id) const {
    if(evDone_Design_id==id)
        {
            return true;
        }
    else
        {
            return false;
        }
}

/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/Design.cpp
*********************************************************************/
