GCC=arm-linux-gcc

source=GPIO
MAIN_SOURCES=$(source).c
MAIN_OBJECTS=$(MAIN_SOURCES:.c=.o)
ALL_OBJECTS = MAIN_SOURCES
obj-m += $(source).o

.PHONY: kernel, clean

kernel:
	make ARCH=arm CROSS_COMPILE=arm-linux- -C ~/felabs/sysdev/tinysystem/linux-2.6.34/ M=$(PWD) modules

clean:
	make ARCH=arm CROSS_COMPILE=arm-linux- -C ~/felabs/sysdev/tinysystem/linux-2.6.34/ M=$(PWD) clean