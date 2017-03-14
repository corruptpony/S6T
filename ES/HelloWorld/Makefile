GCC=arm-linux-gcc

TARGET = hello

MAIN_SOURCES=$(TARGET).c
MAIN_OBJECTS=$(MAIN_SOURCES:.c=.o)
ALL_OBJECTS = MAIN_SOURCES
obj-m += $(TARGET).o

.PHONY: all, clean

all:
	make ARCH=arm CROSS_COMPILE=arm-linux- -C ~/felabs/sysdev/tinysystem/linux-2.6.34/ M=$(PWD) modules

clean:
	make ARCH=arm CROSS_COMPILE=arm-linux- -C ~/felabs/sysdev/tinysystem/linux-2.6.34/ M=$(PWD) clean



#obj-m += hello.o

#all:
#	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

#clean:
#	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean