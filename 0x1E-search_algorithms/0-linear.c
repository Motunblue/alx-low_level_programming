#include "search_algos.h"

/**
 * linear_search - searched using linear search algo
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of value or -1 if failed
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}
