#include "holberton.h"

/**
*_strcat - a function that concatenates two strings.
*@dest: string to be concatenated.
*@src: string to be concatenated.
*Return: &dest[a] (a pointer to resulting string dest).
*/

char *_strcat(char *dest, char *src)
{

int a = 0, b;


while (dest[a] != '\0')
{
a++;
}

for (b = 0; src[b] != '\0'; b++)
{

dest[a] = src[b];
a++;
}

dest[a] = '\0';

return (dest);
}
