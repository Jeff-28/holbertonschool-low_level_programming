#include "holberton.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string variable to be printed.
 * Return: void.
 */

void rev_string(char *s)
{

int a = 0, c = 0, d;
char b;

while (s[a] != '\0')
{
a++;
}

for (d = (a - 1); d >= (a / 2); d--)
{
b = *(s + d);
*(s + d) = *(s + c);
*(s + c) = b;
c++;
}
}
