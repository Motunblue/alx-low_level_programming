#include "main.h"

/**
 * set_bit - Sets a bit at an index
 * @n: Interger to set
 * @index: index
 * Return: 1 if it worked an -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= (sizeof(long int) * 8))
		return (-1);
	mask = 1 << index;
	*n |= mask;
	return (1);
}
