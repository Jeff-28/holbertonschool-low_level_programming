#include "holberton.h"

/**
 * jack_bauer - that prints every minute of the day of Jack Bauer, starting from
 *               00:00 to 23:59.
 *
 * Return: nothing;
 */
void jack_bauer(void)
{
	char min_units = '0', min_tens = '0', hour_units = '0', hour_tens = '0';
	int i = 0;

	while (i < 1440)
	{
		_putchar(hour_tens);
		_putchar(hour_units);
		_putchar(':');
		_putchar(min_tens);
		_putchar(min_units);
		_putchar('\n');

		hour_tens++;
		hour_units++;
		min_tens++;
		min_units++;
	}
}
