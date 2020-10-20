#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - data struct for a dog's identification.
 * @name: denotes the dog's name.
 * @age: denotes the dog's age.
 * @owner: denotes the dog's owner.
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


#endif
