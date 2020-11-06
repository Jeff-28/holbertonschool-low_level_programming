#include "holberton.h"

/**
 * print_alphabet_x10 - will print the alphabet
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char i = 'a';
	int k = '0';

	for (k = '0'; k <= '9'; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
