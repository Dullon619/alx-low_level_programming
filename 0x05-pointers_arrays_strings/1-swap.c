#include "main.h"
/**
 * This function switch to variables values with one another.
 * Swap : a with b and b with a
 * @Return nothing.
 * */
void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
