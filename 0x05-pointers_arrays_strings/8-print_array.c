#include <stdio.h>
#include "main.h"

/**
 * print_array - Print the elements of a array
 * @a: Int variable holding array.
 * @n: Holding the number of elements of the array
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);

	}
	putchar(10);
}
