#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: Pointer to memtory to be filled
 * @b: What should be filled in memory
 * @n: number of memory to be filled
 *
 * Return: Pointer to filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsignet int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
