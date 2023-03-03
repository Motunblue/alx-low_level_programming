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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	if (src[i] == '\0')
		dest[i] = src[i];
	return (dest);
}
