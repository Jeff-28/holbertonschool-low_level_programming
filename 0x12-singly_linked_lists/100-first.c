#include "lists.h"
void startupfun (void) __attribute__ ((constructor));
/**
* startupfun - function to be executed before the main
*
* Return: nothing
*/
void startupfun(void)
{
	char *str = "I bore my house upon my back!";
	printf("You're beat! and yet, you must allow,\n%s\n", str);
}
