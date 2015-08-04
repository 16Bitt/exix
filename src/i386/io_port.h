#ifndef __IO_PORT_H
#define __IO_PORT_H

#include "common.h"

char inb(ushort port);
short inw(ushort port);
void outb(ushort port, char value);
void outw(ushort port, short value);

#endif
