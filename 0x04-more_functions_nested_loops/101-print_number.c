#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: number to print.
 * Return: nothing.
 */
void print_number(int n)
{
	char lastdigit, num;
	int reversed;

	if (n < 0)
	{
		_putchar('-');
		lastdigit = ('0' - (n % 10));
		n = n / -10;
	}
	else
	{
		lastdigit = ((n % 10) + '0');
		n = n / 10;
	}
	reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n = n / 10;
	}

	while (reversed > 0)
	{
		num = ((reversed % 10) + '0');
		_putchar(num);
		reversed = reversed / 10;
	}
	_putchar(lastdigit);
}
