#include "holberton.h"

/**
 * _memcpy - copies @n amount of data from @src to @dest.
 * @dest: destination to where we shall copy contents to.
 * @src: source from where we shall copy the content from.
 * @n: determines the amount of data to be copied.
 * Return: a pointer to the new value of @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

char *ndest = dest, *nsrc = src;

unsigned int i;

for (i = 0; i < n; i++)
{
ndest[i] = nsrc[i];
}

return (ndest);

}
