#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated by new_dog
 * new_dog is defined in 4-new_dog.c
 * @d: Pointer to memory
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
