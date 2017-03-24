GCC=arm-linux-gcc

source=peek_and_poke

MAIN_SOURCES=$(source).c
MAIN_OBJECTS=$(MAIN_SOURCES:.c=.o)
ALL_OBJECTS = MAIN_SOURCES
obj-m += $(source).o

.PHONY: host, target, kernel, clean

host:
	gcc -o $(source) $(source).c

target:
	arm-linux-gcc -o $(source) $(source).c

clean:
	rm $(source)