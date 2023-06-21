#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as
 * parameter on each element of an array
 * @array: Array to iterate
 * @size: Size of the array
 * @action: pointer to function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
