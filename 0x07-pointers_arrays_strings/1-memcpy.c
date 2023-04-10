#include "main.h"
/**
 * _memcpy - copies a memory area
 *
 * @dest: Destination to copy to
 * @src: source to copy from
 * @n: number of elements to copy
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
