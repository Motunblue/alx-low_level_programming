#include "main.h"

/**
 * _strncpy - copy a string. Works the same as strncpy
 * @dest: Destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: Destination pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, i = 0;

	while (dest[i] != '\0')
		i++;
	for (; src[j] != '\0' && j < n - 1; j++)
		dest[j] = src[j];
	if (n >= j && src[j] == '\0')
		dest[j] = src[j];
	return (dest);
}
