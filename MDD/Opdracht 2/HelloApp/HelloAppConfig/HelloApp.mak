
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)MinGW $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES)  $(CPPCompileDebug) -c

#########################################
###### Predefined macros ################
RM=rm -rf
INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=g++
LIB_CMD=ar
LINK_CMD=g++
LIB_FLAGS=rvu
LINK_FLAGS= $(LinkDebug)   

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/Program Files/Telelogic/Rhapsody 7.4/Share"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=HelloApp

all : $(TARGET_NAME)$(EXE_EXT) HelloApp.mak

TARGET_MAIN=MainHelloApp

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/MinGW

ADDITIONAL_OBJS=

OBJS= \
  Application.o \
  Display.o \
  Controller.o \
  IDisplay.o \
  IControl.o \
  DistributedHelloTestSystem.o \
  Design.o \
  Test.o




#########################################
####### Predefined macros ###############
$(OBJS) :  $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/mingwaomanim$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/mingwoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/mingwomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/mingwtomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/mingwaomtrace$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/mingwoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/mingwomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)/LangCpp/lib/mingwoxf$(LIB_EXT)
SOCK_LIB=-lws2_32

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)

#####################################################################
##################### Context dependencies and commands #############






Application.o : Application.cpp Application.h    
	@echo Compiling Application.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Application.o Application.cpp




Display.o : Display.cpp Display.h    IControl.h Design.h IDisplay.h 
	@echo Compiling Display.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Display.o Display.cpp




Controller.o : Controller.cpp Controller.h    Design.h IDisplay.h IControl.h 
	@echo Compiling Controller.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Controller.o Controller.cpp




IDisplay.o : IDisplay.cpp IDisplay.h    Design.h 
	@echo Compiling IDisplay.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o IDisplay.o IDisplay.cpp




IControl.o : IControl.cpp IControl.h    Design.h 
	@echo Compiling IControl.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o IControl.o IControl.cpp




DistributedHelloTestSystem.o : DistributedHelloTestSystem.cpp DistributedHelloTestSystem.h    Test.h Display.h Controller.h IDisplay.h IControl.h 
	@echo Compiling DistributedHelloTestSystem.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o DistributedHelloTestSystem.o DistributedHelloTestSystem.cpp




Design.o : Design.cpp Design.h    Controller.h IDisplay.h IControl.h 
	@echo Compiling Design.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Design.o Design.cpp




Test.o : Test.cpp Test.h    DistributedHelloTestSystem.h Display.h 
	@echo Compiling Test.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Test.o Test.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) HelloApp.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) HelloApp.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) Application.o
	$(RM) Display.o
	$(RM) Controller.o
	$(RM) IDisplay.o
	$(RM) IControl.o
	$(RM) DistributedHelloTestSystem.o
	$(RM) Design.o
	$(RM) Test.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

