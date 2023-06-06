#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: Variable to initialize
 * @name: member of variable dog
 * @age: member of variable dog
 * @owner: member of variable dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
