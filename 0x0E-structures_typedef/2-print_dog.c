#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints struct dog
 * @d: Pointer to structure to print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
}
