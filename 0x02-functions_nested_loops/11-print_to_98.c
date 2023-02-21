#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: input number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)
		if (x == 98)
			printf("%d\n", x);
		else
			printf("%d, ", x);
}
