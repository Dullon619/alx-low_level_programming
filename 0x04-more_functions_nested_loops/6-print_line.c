#include <stdio.h>
#include "main.h"
/**
 *
 * The function prints a straight line on parameter n.
 * Return : none
 */
void print_line(int n)
{
while(n-- > 0)
{
putchar('_');
}
putchar('\n');
}
