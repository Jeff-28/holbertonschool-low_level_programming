#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
		_strlen_recursion(s);
	}
	return (n);
}
