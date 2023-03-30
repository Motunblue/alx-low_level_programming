#include "main.h"

/**
 * reverse_array - reverse an array of intergers
 *
 * @a: array to reverse
 * @n: Number of element in array
 */

void reverse_array(int *a, int n)
{
	int i = 0, c;

	for (; i < (n / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
