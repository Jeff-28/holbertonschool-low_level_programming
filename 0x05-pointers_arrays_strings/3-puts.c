#include "holberton.h"

/**
 * _puts - prints a string to stdout.
 * @str: a string variable.
 * Return: void.
 */

void _puts(char *str)
{

int c;
c = 0;

while (str[c] != '\0')
{

_putchar(str[c]);
c++;
}

_putchar('\n');

}
