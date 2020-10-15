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

int i = 0;
unsigned int j = 0;
char *str, *new;

while (s1[i] != '\0')
{
i++;
}

str = malloc(sizeof(char) * i + n);

if (str == NULL)
{
return (NULL);
}

new = str;

while (*s1)
{
*new = *s1;
new++;
s1++;
}

while (j < n)
{
*new = *(s2 + j);
new++;
j++;
}

return (str);
}
