#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creats an array of character with specific char
 * @size: Size of the array
 * @c: character
 *
 * Return: Pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
