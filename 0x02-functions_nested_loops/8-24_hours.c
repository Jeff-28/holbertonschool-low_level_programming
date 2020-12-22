#include "holberton.h"

/**
 * jack_bauer - that prints every minute of the day of Jack Bauer, starting from
 *               00:00 to 23:59.
 *
 * Return: nothing;
 */
void jack_bauer(void)
{
	int min_units, min_tens, hour_units, hour_tens;
	int i = 0;

	for (hour_tens = 0; hour_tens <= 2; hour_tens++)
	{
		for (hour_units = 0; hour_units <= 9; hour_units++)
		{
			if (hour_tens == 2 && hour_units == 4)
				break;
			for (min_tens = 0; min_tens <= 5; min_tens++)
			{
				for (min_units = 0; min_units <= 9; min_units++)
				{
					_putchar(hour_tens + '0');
					_putchar(hour_units + '0');
					_putchar(':');
					_putchar(min_tens + '0');
					_putchar(min_units + '0');
					_putchar('\n');
				}
			}
		}
	}
}
