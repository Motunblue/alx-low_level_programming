#include "main.h"

/**
 * print_binary - Prints the binary representaion of a number
 * @n: Number to print
 */

void print_binary(unsigned long int n)
{
	static int i = 1;

	if (n == 0)
	{
		if (i) /* If Zero (0) is the original int */
			_putchar(0);
		return;
	}
	i = 0; /* n is greater than 0 */
	print_binary(n >> 1);
	_putchar((n & 1) + '0'); /* Print on LIFO basis */
}
