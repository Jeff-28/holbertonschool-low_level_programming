#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string of characters
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;
	j = len - i;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
