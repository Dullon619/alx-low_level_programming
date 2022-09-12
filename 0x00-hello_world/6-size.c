#include <stdio.h>

/* 
 *Getting the size of the different data types in c programming language
 * The main function will return all there details
 *
 * */

int main(void)
{

    char c;
    int i;
    float f;
    long dl;
    long long lli;

    printf("Size of char: %ld byte(s)\n", sizeof(c));
    printf("Size of an int: %ld byte(s)\n", sizeof(i)); 
    printf("Size of a long int: %ld byte(s)\n", sizeof(dl));
    printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
    print("Size of a float: %ld byte(s)\n", sizeof(f));

	    
    return (0);
}	

