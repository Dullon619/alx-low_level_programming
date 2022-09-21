#include "main.h"

/**
 *_strlen - returns the length of a string
 *@length: holds the count of words
 * @s: string variable
 *Return: returns length as integer;
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != '\0')
		lenght++;

	return (lenght);
}
