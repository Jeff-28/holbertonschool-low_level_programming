#include <stdio.h>

/**
*main - entry point
*Return: value of 0
*/

int main(void)
{

	char i = 'z';

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
