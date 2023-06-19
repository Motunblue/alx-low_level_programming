#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - type for a dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Doge owner
 *
 * Description: This is a type that can hold all attributable
 * character of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* Prototype to initialize struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
