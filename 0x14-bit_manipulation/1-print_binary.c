#include "main.h"

void print_bin_rec(unsigned long int n);

/**
 * print_binary - Prints the binary of a number
 * @n: Integer to print
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}
	print_bin_rec(n);
}

/**
 * print_bin_rec - Prints the binary of a number recursively
 * @n: Integer to print
 */
void print_bin_rec(unsigned long int n)
{
	if (!n)
		return;

	print_bin_rec(n >> 1);
	_putchar((n & 1) + '0');
}
