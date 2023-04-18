#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: Pointer to diagram
 * @size: size of one size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = a[0];
	sum2 = a[size - 1];

	for (i = 1; i < size; i++)
	{
		sum1 += a[i + (size * i)];
		sum2 += a[(size - 1) + (size * i) - i];
	}
	printf("%d, %d\n", sum1, sum2);
}
