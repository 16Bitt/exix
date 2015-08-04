#ifndef __SYSCALL_H
#define __SYSCALL_H

#include "common.h"

typedef enum{
	OS_MAPINT,
	OS_KILL,
	OS_GETPID,
	OS_EXEC,
	OS_GETINT,
	OS_SECURE,
	OS_ISSECURE
} syscall_t;

void os_mapint(uchar num, void (*func)());
void os_kill(int pid);
int os_getpid();
void os_exec(void* addr);
void os_secure();
void os_issecure();

#endif
