#include "holberton.h"
/**
 * puts2 - prints every other character of a string,
 *         starting with the first character
 * @str: string of characters
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			if (i % 2 == 0)
				_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
