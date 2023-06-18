#include "main.h"
#include <stdlib.h>

void cpy(char*, char*, unsigned int);

/**
 * _realloc - reallocates memory block using malloc
 * This function works same as realloc. Check out man realloc
 * @ptr: Pointer to the previoulsy allocated memory
 * @old_size: Size of the previously allocated memory
 * @new_size: Size of the new memory block
 * Return:Pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newmem = NULL;

	if (new_size == old_size)
		return (ptr);

	newmem = malloc(new_size);
	if (newmem == NULL)
		return (NULL);

	if (ptr == NULL)
		return (newmem);
	if (new_size == 0)
	{
		free(ptr);
		free(newmem);
		return (NULL);
	}
	if (new_size > old_size)
		cpy(ptr, newmem, old_size);
	if (new_size < old_size)
		cpy((char *)ptr, newmem, new_size);
	free(ptr);

	return (newmem);
}

/**
 * cpy - copies a text from src to dest
 * @src: Source
 * @dest: dest
 * @size: size of text to copy
 */

void cpy(char *src, char *dest, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
		dest[i] = src[i];
}
