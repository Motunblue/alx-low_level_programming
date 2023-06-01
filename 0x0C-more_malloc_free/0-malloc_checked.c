#include "mainh"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size to malloc
 * Return: pointer to allocated space
 */

void *malloc_checked(unsigned int b)
{
	char *mal = NULL;

	mal = malloc(b);
	if (mall == NULL)
		exit(98);
	return (mal);
}
