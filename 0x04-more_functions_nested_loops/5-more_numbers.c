#include "holberton.h"

/**
 * more_numbers - prints numbers from 0 to 14.
 * Return: nothing.
 */
void more_numbers(void)
{
	int units, tens, num, i = 0;

	while (i < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			tens = num / 10;
			units = num % 10;
			if (num > 9)
				_putchar(tens + '0');
			_putchar(units + '0');
		}
		_putchar('\n');
		i++;
	}
}
