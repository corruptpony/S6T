
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

TARGET_NAME=PhytecTest

all : $(TARGET_NAME)$(EXE_EXT) PhytecTest.mak

TARGET_MAIN=MainPhytecTest

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/MinGW

ADDITIONAL_OBJS=

OBJS= \
  PhytecTestSystem.o \
  Tacho.o \
  iTacho.o \
  iTachoCB.o \
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






PhytecTestSystem.o : PhytecTestSystem.cpp PhytecTestSystem.h    Tacho.h iTacho.h iTachoCB.h 
	@echo Compiling PhytecTestSystem.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PhytecTestSystem.o PhytecTestSystem.cpp




Tacho.o : Tacho.cpp Tacho.h    Design.h iTachoCB.h iTacho.h 
	@echo Compiling Tacho.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Tacho.o Tacho.cpp




iTacho.o : iTacho.cpp iTacho.h    Design.h 
	@echo Compiling iTacho.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o iTacho.o iTacho.cpp




iTachoCB.o : iTachoCB.cpp iTachoCB.h    Design.h 
	@echo Compiling iTachoCB.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o iTachoCB.o iTachoCB.cpp




Design.o : Design.cpp Design.h    Tacho.h iTacho.h iTachoCB.h 
	@echo Compiling Design.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Design.o Design.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) PhytecTest.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) PhytecTest.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) PhytecTestSystem.o
	$(RM) Tacho.o
	$(RM) iTacho.o
	$(RM) iTachoCB.o
	$(RM) Design.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

