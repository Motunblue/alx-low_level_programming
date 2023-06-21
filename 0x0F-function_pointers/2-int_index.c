#include "function_pointers.h"

/**
 * int_index - Searchs for an integer
 * @array: Array of integer
 * @size: size of the array
 * @cmp: Pointer to search function
 *
 * Return: index of the first element
 * -1 if no element matches or size less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
