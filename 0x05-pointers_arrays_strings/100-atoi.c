#include "holberton.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int num = 0, sign = 1, j, i = 0, len = 0;

	while (s[len] != '\0')
		len++;
	while (i < len)
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}
	for (j = i; j < len; j++)
	{
		if (!(s[j] <= '9' && s[j] >= '0'))
			break;
	}
	if (s[i - 1] == '-')
		sign = -1;
	len = j - i;
	while (len >= 1)
	{
		num = num * 10 + (s[i] - '0');
		i++;
		len--;
	}
	return (sign * num);
}
