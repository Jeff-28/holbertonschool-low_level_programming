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
if (s1 == NULL)
{
s1 = NULL;
}
if (s2 == NULL)
{
s2 = NULL;
}
while (*(s1 + i) != '\0')
{
i++;
}
while (*(s2 + j) != '\0')
{
j++;
}
str = malloc(sizeof(char) * i + j + 1);
if (str == NULL)
{
free(str);
return (NULL);
}
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


