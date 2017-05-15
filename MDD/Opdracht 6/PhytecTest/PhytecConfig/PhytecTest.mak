
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)PHYLINUX $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -march=armv4t $(CPPCompileDebug) -c

#########################################
###### Predefined macros ################
RM=rm -rf
INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=arm-none-linux-gnueabi-g++ -DUSE_IOSTREAM
LIB_CMD=arm-none-linux-gnueabi-ar
LINK_CMD=$(CC)
LIB_FLAGS=rvu
LINK_FLAGS= -lpthread -lstdc++ $(LinkDebug)   

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/Program Files/Telelogic/Rhapsody 7.4/Share"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=
LIB_EXT=.a

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=PhytecTest

all : $(TARGET_NAME)$(EXE_EXT) PhytecTest.mak

TARGET_MAIN=MainPhytecTest

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/phyLinux

ADDITIONAL_OBJS=

OBJS= \
  PhytecTestSystem.o \
  Controller.o \
  iTacho.o \
  iTachoCB.o \
  iKeyCB.o \
  iMotor.o \
  Motor.o \
  Tacho.o \
  Key.o \
  Design.o \
  DesignTacho.o \
  DesignMotor.o




#########################################
####### Predefined macros ###############
$(OBJS) :  $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/phylinuxaomanimarm-none-linux-gnueabi$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/phylinuxoxfinstarm-none-linux-gnueabi$(LIB_EXT) $(OMROOT)/LangCpp/lib/phylinuxomcomapplarm-none-linux-gnueabi$(LIB_EXT)
SOCK_LIB=

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/phylinuxaomtracearm-none-linux-gnueabi$(LIB_EXT) $(OMROOT)/LangCpp/lib/phylinuxaomtracearm-none-linux-gnueabi$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/phylinuxoxfinstarm-none-linux-gnueabi$(LIB_EXT) $(OMROOT)/LangCpp/lib/phylinuxomcomapplarm-none-linux-gnueabi$(LIB_EXT)
SOCK_LIB=

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)/LangCpp/lib/phylinuxoxfarm-none-linux-gnueabi$(LIB_EXT)
SOCK_LIB=

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)

#####################################################################
##################### Context dependencies and commands #############






PhytecTestSystem.o : PhytecTestSystem.cpp PhytecTestSystem.h    Controller.h Motor.h Tacho.h Key.h iTacho.h iTachoCB.h iKeyCB.h iMotor.h 
	@echo Compiling PhytecTestSystem.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PhytecTestSystem.o PhytecTestSystem.cpp




Controller.o : Controller.cpp Controller.h    Design.h iTacho.h iMotor.h iTachoCB.h iKeyCB.h 
	@echo Compiling Controller.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Controller.o Controller.cpp




iTacho.o : iTacho.cpp iTacho.h    DesignTacho.h 
	@echo Compiling iTacho.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o iTacho.o iTacho.cpp




iTachoCB.o : iTachoCB.cpp iTachoCB.h    DesignTacho.h 
	@echo Compiling iTachoCB.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o iTachoCB.o iTachoCB.cpp




iKeyCB.o : iKeyCB.cpp iKeyCB.h    Design.h 
	@echo Compiling iKeyCB.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o iKeyCB.o iKeyCB.cpp




iMotor.o : iMotor.cpp iMotor.h    DesignMotor.h 
	@echo Compiling iMotor.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o iMotor.o iMotor.cpp




Motor.o : Motor.cpp Motor.h    DesignMotor.h iMotor.h 
	@echo Compiling Motor.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Motor.o Motor.cpp




Tacho.o : Tacho.cpp Tacho.h    DesignTacho.h iTachoCB.h iTacho.h 
	@echo Compiling Tacho.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Tacho.o Tacho.cpp




Key.o : Key.cpp Key.h    Design.h iKeyCB.h 
	@echo Compiling Key.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Key.o Key.cpp




Design.o : Design.cpp Design.h    Key.h iKeyCB.h Controller.h 
	@echo Compiling Design.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Design.o Design.cpp




DesignTacho.o : DesignTacho.cpp DesignTacho.h    Tacho.h iTacho.h iTachoCB.h 
	@echo Compiling DesignTacho.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o DesignTacho.o DesignTacho.cpp




DesignMotor.o : DesignMotor.cpp DesignMotor.h    Motor.h iMotor.h 
	@echo Compiling DesignMotor.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o DesignMotor.o DesignMotor.cpp







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

post-build:
		-ssh root@192.168.3.11 killall $(TARGET_NAME)
		@echo
		@echo Copying $(TARGET_NAME) to Target. Please wait a moment.
		-ftp -u ftp://root:root@192.168.3.11/ ./$(TARGET_NAME) 

clean:
	@echo Cleanup
	$(RM) PhytecTestSystem.o
	$(RM) Controller.o
	$(RM) iTacho.o
	$(RM) iTachoCB.o
	$(RM) iKeyCB.o
	$(RM) iMotor.o
	$(RM) Motor.o
	$(RM) Tacho.o
	$(RM) Key.o
	$(RM) Design.o
	$(RM) DesignTacho.o
	$(RM) DesignMotor.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

