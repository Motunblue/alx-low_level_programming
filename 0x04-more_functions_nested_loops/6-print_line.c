#include "main.h"

/**
 * print_line - Print a number of line
 * @n: number of line to print
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
