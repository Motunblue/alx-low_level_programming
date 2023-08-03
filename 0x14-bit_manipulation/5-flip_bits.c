#include "main.h"

/**
 * flip_bits - count number of byte needed to flip from one number to another
 * @n: number 1
 * @m: number 2
 * Return: The result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xnor, count = 0;

	xnor = n ^ m;
	while (xnor)
	{
		count += xnor & 1; /* Count every one in the xnor */
		xnor >>= 1;
	}
	return (count);
}
