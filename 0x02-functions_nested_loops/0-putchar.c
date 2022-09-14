#include <unistd.h>
/* 
 * A custom function what is user to return a value{string} to the screen */
int _putchar(char c)
{
	return(write(1, &c,1));
}


int main(void)
{
	_putchar("_putchar");
	return (0);
}
