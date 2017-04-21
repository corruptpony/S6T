
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

TARGET_NAME=HexapodModel

all : $(TARGET_NAME)$(EXE_EXT) HexapodModel.mak

TARGET_MAIN=MainHexapodModel

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/MinGW

ADDITIONAL_OBJS=

OBJS= \
  HexapodFirmware.o \
  Leg.o \
  ILeg.o \
  ILegCB.o \
  Sensor.o \
  ISensorCB.o \
  Body.o \
  Design.o




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






HexapodFirmware.o : HexapodFirmware.cpp HexapodFirmware.h    Leg.h Sensor.h Body.h ILeg.h ILegCB.h ISensorCB.h 
	@echo Compiling HexapodFirmware.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o HexapodFirmware.o HexapodFirmware.cpp




Leg.o : Leg.cpp Leg.h    Design.h ILegCB.h ILeg.h 
	@echo Compiling Leg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Leg.o Leg.cpp




ILeg.o : ILeg.cpp ILeg.h    Design.h 
	@echo Compiling ILeg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ILeg.o ILeg.cpp




ILegCB.o : ILegCB.cpp ILegCB.h    Design.h 
	@echo Compiling ILegCB.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ILegCB.o ILegCB.cpp




Sensor.o : Sensor.cpp Sensor.h    Design.h ISensorCB.h 
	@echo Compiling Sensor.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Sensor.o Sensor.cpp




ISensorCB.o : ISensorCB.cpp ISensorCB.h    Design.h 
	@echo Compiling ISensorCB.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ISensorCB.o ISensorCB.cpp




Body.o : Body.cpp Body.h    Design.h ILeg.h ILegCB.h ISensorCB.h 
	@echo Compiling Body.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Body.o Body.cpp




Design.o : Design.cpp Design.h    Leg.h Sensor.h ISensorCB.h ILeg.h ILegCB.h Body.h 
	@echo Compiling Design.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Design.o Design.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) HexapodModel.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) HexapodModel.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) HexapodFirmware.o
	$(RM) Leg.o
	$(RM) ILeg.o
	$(RM) ILegCB.o
	$(RM) Sensor.o
	$(RM) ISensorCB.o
	$(RM) Body.o
	$(RM) Design.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

