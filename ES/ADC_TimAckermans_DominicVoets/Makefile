GCC=arm-linux-gcc

obj-m += adc_stripped.o

.PHONY: kernel, clean

kernel:
	make ARCH=arm CROSS_COMPILE=arm-linux- -C ~/felabs/sysdev/tinysystem/linux-2.6.34/ M=$(PWD) modules

clean:
	make ARCH=arm CROSS_COMPILE=arm-linux- -C ~/felabs/sysdev/tinysystem/linux-2.6.34/ M=$(PWD) clean