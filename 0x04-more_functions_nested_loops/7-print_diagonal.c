#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed.
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int i = 0;
	char line = '\\';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar(line);
			i++;
		}
		_putchar('\n');
	}
}
