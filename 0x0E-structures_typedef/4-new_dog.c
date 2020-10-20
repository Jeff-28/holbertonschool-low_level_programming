#include "dog.h"
#include <stdlib.h>
/**
 * strlength - defines the length of a sting.
 * @str: string to be defined.
 * Return: length of the string.
 */
int strlength(char *str)
{
int idx = 0;
while (*(str + idx) != '\0')
{
idx++;
}
return (idx + 1);
}
/**
 * strcopy - copies a string.
 * @str: string to copy.
 * Return: pointer to copied string.
 */
char *strcopy(char *str)
{
int idx;
int strlen = strlength(str);
char *ret_str = malloc(strlen);

if (ret_str == NULL)
{
return (NULL);
}
for (idx = 0; idx < strlen; idx++)
{
ret_str[idx] = str[idx];
}
return (ret_str);
}
/**
 * new_dog - creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;

new = malloc(sizeof(dog_t));
if (new == NULL)
{
return (NULL);
}
new->name = strcopy(name);
if (new->name == NULL)
{
free(new->name);
free(new);
return (NULL);
}
new->age = age;
new->owner = strcopy(owner);
if (new->owner == NULL)
{
free(new->owner);
free(new->name);
free(new);
return (NULL);
}
return (new);
}
