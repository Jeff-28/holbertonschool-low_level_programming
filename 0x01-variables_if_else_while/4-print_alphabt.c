#include <stdio.h>

/**
*main - entry point
*Return: value of 0
*/

int main(void)
{

	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			i++;
		}

		putchar(i);
	}

	putchar('\n');

	return (0);
}
