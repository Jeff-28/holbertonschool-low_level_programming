#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer.
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	int k, p;

	if (n < 0)
	{
		p = n * -1;
		k = p % 10;
	}
	else
	{
		k = n % 10;
	}

	_putchar(k + '0');

	return (k);
}
