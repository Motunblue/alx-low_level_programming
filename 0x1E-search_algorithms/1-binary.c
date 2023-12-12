#include "search_algos.h"

void print_array(int *array, size_t h, size_t l);

/**
 * binary_search - searched using binary search algo
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of value or -1 if failed
*/
int binary_search(int *array, size_t size, int value)
{
	size_t h = size - 1, l = 0, n;

	if (!array)
		return (-1);

	while (h >= l)
	{
		print_array(array, h, l);
		n = (h + l) / 2;
		if (array[n] == value)
			return (n);
		else if (array[n] > value)
			h = n - 1;
		else
			l = n + 1;
	}
	return (-1);
}


/**
 * print_array - Prints an array
 * @array: array to print
 * @l: starting point
 * @h: ending point
*/
void print_array(int *array, size_t h, size_t l)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= h; i++)
	{
		printf("%d", array[i]);
		if (i != h)
			printf(", ");
	}
	printf("\n");
}
