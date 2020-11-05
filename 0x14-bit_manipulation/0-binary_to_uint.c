#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number or 0 if b is NULL, or if there is one or more
 *         chars in the string b that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i;
	int len = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}

		len++;
	}

	for (len = len - 1, i = 1; len >= 0; len--, i = i * 2)
	{
		if (b[len] == '1')
		{
			n += i;
		}
	}

	return (n);
}
