#include "../include/strcpy.h"

char *sstrcpy(char *dest, const char *src)
{
	//Input	
	int i = 0;
	while(src[i] != '\0'){
		dest[i] = src[i];
		i ++;
	}
	return dest;
}
