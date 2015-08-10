#include "common.h"
#include "string.h"

char* hello_string = "Hello, world";

void exix_main(){
	int i;
	for(i = 0; i < strlen(hello_string); i++)
		((char*) 0xB8000)[i * 2] = hello_string[i];
}

void memcpy(void* src, void* dest, uint length){
	int i;
	for(i = 0; i < length; i++)
		((char*) dest)[i] = ((char*) src)[i];
}

void memset(void* dest, int val, uint length){
	int i;
	for(i = 0; i < length; i++)
		((char*) dest)[i] = val;
}
