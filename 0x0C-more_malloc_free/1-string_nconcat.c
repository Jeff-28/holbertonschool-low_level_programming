#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: destination string.
 * @s2: source string.
 * @n: denotes the amount of bytes that shall be concatenated
 *     from @s2.
 * Return: pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, idx = 0, idx2 = 0;
char *str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
if (n >= j)
{
n = j;
}
str = malloc(i + n);
if (str == NULL)
{
return (NULL);
}
while (idx < i)
{
str[idx] = s1[idx];
idx++;
}
while (idx2 < n)
{
str[idx + idx2] = s2[idx2];
idx2++;
}
return (str);
}
