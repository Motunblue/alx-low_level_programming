#include "main.h"
#include <stdlib.h>

/**
 * array_range - Created an array of integers
 * Array contain all values from min to max in sorted order
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to array
 */

int *array_range(int min, int max)
{
	int *array = NULL;
	int i, size = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		size++;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min + i;
	return (array);
}
