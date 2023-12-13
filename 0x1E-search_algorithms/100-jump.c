#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searched using jump search algo
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of value or -1 if failed
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, j;
	int jump = sqrt(size);

	if (!array)
		return (-1);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
			for (j = i - jump; j <= i; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			if (j == i + 1)
				continue;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
	for (i -= jump; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
	}
	return (-1);
}
