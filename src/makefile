SOURCES	= $(patsubst %.c,%.o,$(wildcard *.c))
CFLAGS	= -nostdlib -nostdinc -fno-builtin -fno-stack-protector -I../include/ -I. -g -Werror
TARGET	= kernel_generic.a
AR	= ar
ARFLAGS	= -rcs

all: archive

clean:
	-rm *.o $(TARGET)

archive: $(SOURCES)
	$(AR) $(ARFLAGS) $(TARGET) $(SOURCES)

i386-build:
	cd i386 && make
