#include "common.h"
#include "io_port.h"

char inb(ushort port){
	char ret;
	asm volatile("inb %1, %0" : "=a" (ret) : "dN" (port));
	return ret;
}

short inw(ushort port){
	short ret;
	asm volatile("inw %1, %0" : "=a" (ret) : "dN" (port));
	return ret;
}

void outb(ushort port, char value){
	asm volatile("outb %1, %0" :: "dN" (port), "a" (value));
}

void outw(ushort port, short value){
	asm volatile("outw %1, %0" :: "dN" (port), "a" (value));
}
