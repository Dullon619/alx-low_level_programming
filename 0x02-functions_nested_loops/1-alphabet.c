#include "main.h"

/* 
 * Print the alphabet in all lowercase letters 
 *
 * return: 0
 * */

void print_alphabet(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

