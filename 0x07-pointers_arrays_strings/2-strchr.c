#include "holberton.h"

/**
 * _strchr - finds the first occurence of @c in @s.
 * @s: string to be searched.
 * @c: character to match.
 * Return: pointer to the result of the search.
 */

char *_strchr(char *s, char c)
{

while (*s != c && *s != '\0')
{
s++;
}

if (*s == c)
{
return (s);
}

else
{
return ('\0');
}

}
