#include "main.h"
/**
 * _memcpy - copied the memory of a area
 *@n: Numbers of bytes 
 * Return : pointer to the memory that has been copied
 *
 *
 *
 */ 



char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
