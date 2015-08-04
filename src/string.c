#include "common.h"

uint strlen(char* str){
	uint len = 0;
	while(*str++ != 0)
		len++;

	return len;
}

int strcmp(char* str1, char* str2){
	uint len1 = strlen(str1);
	uint len2 = strlen(str2);
	if(len1 != len2)
		return 1;

	int i;
	for(i = 0; i < len1; i++)
		if(str1[i] != str2[i])
			return i + 1;

	return 0;
}


int strncmp(char* str1, char* str2, uint len){
	int i;
	for(i = 0; i < len; i++)
		if(str1[i] != str2[i])
			return i + 1;

	return 0;
}
