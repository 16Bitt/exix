#ifndef __COMMON_H
#define __COMMON_H

//Default types
typedef unsigned int 	u32int;
typedef int		s32int;
typedef unsigned short 	u16int;
typedef short 		s16int;
typedef unsigned char	u8int;
typedef char		s8int;
typedef int		size_t;
typedef unsigned int	uint;
typedef unsigned char	uchar;
typedef unsigned short	ushort;

//Common constants
#define NULL 0
#define FALSE 0
#define TRUE (!FALSE)

//Memory functions
void memcpy(void* src, void* dest, uint length);
void memset(void* dest, int val, uint length);
void memcpy_fast(void* src, void* dest, uint length);
void memset_fast(void* dest, int val, uint length);

//Entry point to generic code
void exix_main();

#endif
