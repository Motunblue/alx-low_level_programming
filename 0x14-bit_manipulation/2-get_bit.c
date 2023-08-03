#include "main.h"

/**
 * get_bit - returns value of the bit at an index
 * @n: integer
 * @index: index
 * Return: Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	for (; n && index; index--)
		n = n >> 1;
	if (n)
		return (n & 1);
	else
		return (-1);
}
