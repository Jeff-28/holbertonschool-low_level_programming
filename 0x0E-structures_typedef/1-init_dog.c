#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type 'struct dog'.
 * @d: pointer to the new variable to be initialized.
 * @name: denotes the name of the dog.
 * @age: denotes the age of the dog.
 * @owner: denotes the owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
{
exit(1);
}

d->name = name;
d->age = age;
d->owner = owner;

}
