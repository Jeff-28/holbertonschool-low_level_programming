#include "dog.h"
#include <stdlib.h>

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

  new->name = malloc(sizeof(name));
  if (new->name == NULL)
    {
      return (NULL);
    }

  new->name = name;

  new->age = age;

  new->owner = malloc(sizeof(owner));

  if (new->owner == NULL)
    {
      return (NULL);
    }

  return (new);
}
