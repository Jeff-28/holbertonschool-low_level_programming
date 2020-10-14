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

char *str, *temp;
int i = 0, j = 0;

while (*(s1 + i) != '\0')
{
i++;
}

while (*(s2 + j) != '\0')
{
j++;
}

str = malloc(sizeof(char) * i + j);

temp = str;

while (*s1)
{
*temp = *s1;
temp++;
s1++;
}

while (*s2)
{
*temp = *s2;
temp++;
s2++;
}

return (str);
}


