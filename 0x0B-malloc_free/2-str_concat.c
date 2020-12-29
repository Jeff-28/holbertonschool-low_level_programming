#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates two strings.
 * @s1: destination string.
 * @s2: source string.
 * Return: pointer to new string.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	str = malloc(sizeof(char) * i + j + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (k = 0; k < j; k++)
		str[k + i] = s2[k];
	str[i + j] = '\0';
	return (str);
}
