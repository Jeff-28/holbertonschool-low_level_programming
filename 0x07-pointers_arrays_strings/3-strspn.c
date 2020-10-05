#include "holberton.h"

/**
 * _strspn - calculates the length (in bytes) of a the initial segment of @s,
 *           which consists entirely of bytes in @accept.
 * @s: string of characters.
 * @accept: denotes the bytes to be found in @s (if any).
 * Return: the number of bytes in the initial segment of @s,
 *          which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{

int a, b;

for (a = 0; s[a] != '\0'; a++)
{

for (b = 0; accept[b] != s[a]; b++)
{

if (accept[b] == '\0')
return (a);
}

}

return (a);
}
