#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - data struct for a dog's identification.
 * @name: denotes the dog's name.
 * @age: denotes the dog's age.
 * @owner: denotes the dog's owner.
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
