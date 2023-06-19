#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;
	int i, size = 0;

	s = malloc(sizeof(dog_t));
	if (s == NULL)
		return (NULL);
	if (name != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
			size++;
		s->name = malloc(sizeof(char) * (size + 1));
		for (i = 0; name[i] != '\0'; i++)
			s->name[i] = name[i];
		s->name[i] = '\0';
	}
	s->age = age;
	size = 0;
	if (owner != NULL)
	{
		for (i = 0; owner[i] != '\0'; i++)
			size++;
		s->owner = malloc(sizeof(char) * (size + 1));
		for (i = 0; owner[i] != '\0'; i++)
			s->owner[i] = owner[i];
		s->owner[i] = '\0';
	}

	return (s);
}
