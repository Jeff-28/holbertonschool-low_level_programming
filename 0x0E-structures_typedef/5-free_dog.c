#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory occupied by dog's data.
 * @d: pointer to dog's data.
 * Return: void.
 */

void free_dog(dog_t *d)
{

free(d->name);
free(d->age);
free(d->owner);
free(d);

}
