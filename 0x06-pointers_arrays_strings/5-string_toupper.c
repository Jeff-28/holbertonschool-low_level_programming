#include "holberton.h"
/**
 * string_toupper - changes lower case letters to upper case.
 * @s: string to format
 * Return: modified string.
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
		a++;
	}
	s[a] = '\0';

	return (s);
}
