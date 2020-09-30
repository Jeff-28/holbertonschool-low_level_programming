#include "holberton.h"

/**
* print_rev - prints a string in reverse to stdout.
* @s: a string variable.
* Return: void.
*/

void print_rev(char *s)
{

int c;
c = 0;

while (s[c] != '\0')
{
c++;
}

while (s[c] >= '\0')
{
_putchar(s[c]);
c--;
}

_putchar('\n');

}
