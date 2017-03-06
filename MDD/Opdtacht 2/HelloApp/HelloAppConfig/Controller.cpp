/********************************************************************
	Rhapsody	: 7.4 
	Login		: User
	Component	: HelloApp 
	Configuration 	: HelloAppConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 14, Feb 2017  
	File Path	: HelloApp/HelloAppConfig/Controller.cpp
*********************************************************************/

//## auto_generated
#include "Controller.h"
//## package Design

//## class Controller

using namespace std;

//#[ ignore

using namespace std;


using namespace std;

Controller::dsp1_C::InBound_C::InBound_C() {
    itsIControl = NULL;
}

Controller::dsp1_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

IControl* Controller::dsp1_C::InBound_C::getItsIControl() const {
    return itsIControl;
}

void Controller::dsp1_C::InBound_C::setItsIControl(IControl* p_IControl) {
    itsIControl = p_IControl;
}

void Controller::dsp1_C::InBound_C::cleanUpRelations() {
    if(itsIControl != NULL)
        {
            itsIControl = NULL;
        }
}


using namespace std;

Controller::dsp1_C::OutBound_C::OutBound_C() {
    itsIDisplay = NULL;
}

Controller::dsp1_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

IDisplay* Controller::dsp1_C::OutBound_C::getItsIDisplay() const {
    return itsIDisplay;
}

void Controller::dsp1_C::OutBound_C::setItsIDisplay(IDisplay* p_IDisplay) {
    itsIDisplay = p_IDisplay;
}

void Controller::dsp1_C::OutBound_C::cleanUpRelations() {
    if(itsIDisplay != NULL)
        {
            itsIDisplay = NULL;
        }
}

Controller::dsp1_C::dsp1_C() {
}

Controller::dsp1_C::~dsp1_C() {
}

void Controller::dsp1_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    
    
    //#]
}

IControl* Controller::dsp1_C::getItsIControl() {
    //#[ operation getItsIControl()
    return &InBound;
    //#]
}

IDisplay* Controller::dsp1_C::getItsIDisplay() {
    //#[ operation getItsIDisplay()
    return &OutBound;
    //#]
}

void Controller::dsp1_C::setItsIControl(IControl* p_IControl) {
    //#[ operation setItsIControl(IControl*)
    InBound.setItsIControl(p_IControl);
    //#]
}

void Controller::dsp1_C::setItsIDisplay(IDisplay* p_IDisplay) {
    //#[ operation setItsIDisplay(IDisplay*)
    OutBound.setItsIDisplay(p_IDisplay);
    //#]
}

Controller::dsp1_C::InBound_C* Controller::dsp1_C::getInBound() const {
    return (Controller::dsp1_C::InBound_C*) &InBound;
}

Controller::dsp1_C::OutBound_C* Controller::dsp1_C::getOutBound() const {
    return (Controller::dsp1_C::OutBound_C*) &OutBound;
}


using namespace std;


using namespace std;

Controller::dsp2_C::InBound_C::InBound_C() {
    itsIControl = NULL;
}

Controller::dsp2_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

IControl* Controller::dsp2_C::InBound_C::getItsIControl() const {
    return itsIControl;
}

void Controller::dsp2_C::InBound_C::setItsIControl(IControl* p_IControl) {
    itsIControl = p_IControl;
}

void Controller::dsp2_C::InBound_C::cleanUpRelations() {
    if(itsIControl != NULL)
        {
            itsIControl = NULL;
        }
}


using namespace std;

Controller::dsp2_C::OutBound_C::OutBound_C() {
    itsIDisplay = NULL;
}

Controller::dsp2_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

IDisplay* Controller::dsp2_C::OutBound_C::getItsIDisplay() const {
    return itsIDisplay;
}

void Controller::dsp2_C::OutBound_C::setItsIDisplay(IDisplay* p_IDisplay) {
    itsIDisplay = p_IDisplay;
}

void Controller::dsp2_C::OutBound_C::cleanUpRelations() {
    if(itsIDisplay != NULL)
        {
            itsIDisplay = NULL;
        }
}

Controller::dsp2_C::dsp2_C() {
}

Controller::dsp2_C::~dsp2_C() {
}

void Controller::dsp2_C::connectController(Controller* part) {
    //#[ operation connectController(Controller*)
    
    
    //#]
}

IControl* Controller::dsp2_C::getItsIControl() {
    //#[ operation getItsIControl()
    return &InBound;
    //#]
}

IDisplay* Controller::dsp2_C::getItsIDisplay() {
    //#[ operation getItsIDisplay()
    return &OutBound;
    //#]
}

void Controller::dsp2_C::setItsIControl(IControl* p_IControl) {
    //#[ operation setItsIControl(IControl*)
    InBound.setItsIControl(p_IControl);
    //#]
}

void Controller::dsp2_C::setItsIDisplay(IDisplay* p_IDisplay) {
    //#[ operation setItsIDisplay(IDisplay*)
    OutBound.setItsIDisplay(p_IDisplay);
    //#]
}

Controller::dsp2_C::InBound_C* Controller::dsp2_C::getInBound() const {
    return (Controller::dsp2_C::InBound_C*) &InBound;
}

Controller::dsp2_C::OutBound_C* Controller::dsp2_C::getOutBound() const {
    return (Controller::dsp2_C::OutBound_C*) &OutBound;
}
//#]

Controller::Controller() {
    initRelations();
}

Controller::~Controller() {
    cleanUpRelations();
}

Controller::dsp1_C* Controller::getDsp1() const {
    return dsp1;
}

Controller::dsp1_C* Controller::get_dsp1() const {
    return dsp1;
}

Controller::dsp1_C* Controller::newDsp1() {
    dsp1 = new Controller::dsp1_C;
    return dsp1;
}

void Controller::deleteDsp1() {
    delete dsp1;
    dsp1 = NULL;
}

Controller::dsp2_C* Controller::getDsp2() const {
    return dsp2;
}

Controller::dsp2_C* Controller::get_dsp2() const {
    return dsp2;
}

Controller::dsp2_C* Controller::newDsp2() {
    dsp2 = new Controller::dsp2_C;
    return dsp2;
}

void Controller::deleteDsp2() {
    delete dsp2;
    dsp2 = NULL;
}

void Controller::initRelations() {
    dsp1 = newDsp1();
    dsp2 = newDsp2();
    if(get_dsp1())
       get_dsp1()->connectController(this);
    if(get_dsp2())
       get_dsp2()->connectController(this);
}

void Controller::cleanUpRelations() {
    {
        deleteDsp2();
    }
    {
        deleteDsp1();
    }
}

/*********************************************************************
	File Path	: HelloApp/HelloAppConfig/Controller.cpp
*********************************************************************/
