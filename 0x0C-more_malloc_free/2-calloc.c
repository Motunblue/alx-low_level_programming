#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of element in array each of which has a size of size byte
 * @size: Number of byte of each element
 *
 * Return: Allocated memory or NULL if _calloc failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*(array + (sizeof(int) * i))  = 0;
	return (array);
}

