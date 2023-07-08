#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0
 * @n: value to set
 * @index: Index
 * Return: 1 if success & -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= (sizeof(long int) * 8))
		return (-1);
	mask = 1 << index;
	*n &= ~mask;
	return (1);
}
