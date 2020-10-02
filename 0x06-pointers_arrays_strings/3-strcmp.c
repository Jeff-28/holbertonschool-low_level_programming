#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: depends on the result.
 */

int _strcmp(char *s1, char *s2)
{
int a = 0;

while (s1[a] == s2[a] && s1[a] != '\0')

a++;

if (s1[a] > s2[a])
return (15);

else if (s1[a] < s2[a])
return (-15);

else
return (0);

}
