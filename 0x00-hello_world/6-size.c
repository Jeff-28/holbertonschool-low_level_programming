#include <stdio.h>

/**
*main - print the sizeof data types.
*Return: value of 0.
*/

int main(void)

{
int inttype;
float floattype;
long int longtype;
char chartype;
long long int longinttype;

printf("The size of a char: %ld byte(s)\n", sizeof(chartype));

printf("The size of an int: %ld byte(s)\n", sizeof(inttype));

printf("The size of a long int: %ld byte(s)\n", sizeof(longtype));

printf("The size of a long long int: %ld byte(s)\n", sizeof(longinttype));

printf("The size of a float: %ld byte(s)\n", sizeof(floattype));

return (0);

}
