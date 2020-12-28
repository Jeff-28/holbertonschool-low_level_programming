#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed.
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;
	char line = '\\';

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
			{
				_putchar(line);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
