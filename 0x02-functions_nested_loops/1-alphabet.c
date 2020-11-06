#include "holberton.h"

/**
 *print_alphabet - will print the alphabet
 *Return: always 0
 */

void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
