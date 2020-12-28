#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src to the buffer pointed by dest
 * @src: the source string to copy from
 * @dest: the destination where to copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
