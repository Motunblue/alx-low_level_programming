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
	int j;

	for (; src[j] != '\0' && j < n; j++)
		dest[j] = src[j];
	  dest[j] = src[j];
}
