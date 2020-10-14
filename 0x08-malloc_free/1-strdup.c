#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a new string which is a
*            duplicate of the string str.
*
* @str: string to be duplicated.
*
* Return: pointer to char.
*/

char *_strdup(char *str)
{

int i = 0;
char *newstr;
char *dup;

while (*(str + i) != '\0')
{
i++;
}

newstr = (char *)malloc(sizeof(char) * i + 1);

if (newstr == '\0')
{
return ('\0');
}

dup = newstr;

while (*str)
{
*dup = *str;
dup++;
str++;
}

*dup = '\0';

return (newstr);
}
