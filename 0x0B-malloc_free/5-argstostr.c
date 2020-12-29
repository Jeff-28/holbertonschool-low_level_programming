#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the count of arguments.
 * @av: array of arguments.
 * Return: pointer to new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	str = malloc((sizeof(char *) * ac) + ac + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
