#include "search_algos.h"
#include <math.h>

/**
 * interpolated_search - searched using interpolated search algo
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of value or -1 if failed
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))
}