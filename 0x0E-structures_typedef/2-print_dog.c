#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog with its different elements.
 * @d: pointer to the struct to be printed.
 * Return: void.
 */

void print_dog(struct dog *d)
{

if (d == NULL)
{
printf(" \n");
}

if (d->name == NULL)
{
d->name = "(nil)";
}

if (d->owner == NULL)
{
d->owner = "(nil)";
}

printf("Name: %s\n", d->name);

if (d->age == '\0')
{
printf("Age: (nil)\n");
}
else
{
printf("Age: %f\n", d->age);
}

printf("Owner: %s\n", d->owner);

}
