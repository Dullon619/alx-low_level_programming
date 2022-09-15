#include "main.h"
/*
 *Print the alphabet 10x
 *Return -> 0
 * 
 * */
void print_alphabet_x10(void)
{
	for(int i = 0; i <= 9; i++)
	{
		for(char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
