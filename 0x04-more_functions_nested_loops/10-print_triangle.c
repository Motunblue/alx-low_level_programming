#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: lenght of triagle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		if (i != size)
			_putchar('\n');
	}
	_putchar('\n');
}
