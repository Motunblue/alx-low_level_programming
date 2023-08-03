#include "main.h"

/**
 * get_bit - value of bit at a given index
 * @n: Interger
 * @index: index
 * Return: result
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= (sizeof(long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
