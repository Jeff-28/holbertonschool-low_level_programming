#include <stdio.h>

/**
*main - entry point
*Return: value of 0
*/

int main(void)
{
	char i = 'a';
	char p = 'A';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (p = 'A'; p <= 'Z'; p++)
	{
		putchar(p);
	}

	putchar('\n');

	return (0);
}
