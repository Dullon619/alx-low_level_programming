#include "main.h"

/**
 * _memset - fills the memory block with a constant byte
 *
 * @s: memory block
 * @b:character to be used
 * @n: number of bytes	
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}}
