SOURCES	= boot.o $(patsubst %.c,%.o,$(wildcard *.c)) interrupt.o table.o
CFLAGS	= -nostdlib -nostdinc -fno-builtin -fno-stack-protector -I../../include/ -I. -g -Werror
TARGET	= kernel.bin
ASFLAGS	= -felf
LDFLAGS	= -Tlink.ld -melf_i386
LD	= ld

all: link

clean:
	-rm *.o $(TARGET)

link: $(SOURCES)
	$(LD) $(LDFLAGS) -o $(TARGET) $(SOURCES) ../kernel_generic.a

.s.o:
	nasm $(ASFLAGS) $<
	
