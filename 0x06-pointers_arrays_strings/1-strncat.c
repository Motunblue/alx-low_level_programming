#include "main.h"

/**
 * _strncat - concatenate 2 strings of with n byte(s)
 * @dest: String 1
 * @src: String 2
 * @n: number of byte to concatenate
 *
 * Return: pointer to concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[j] != '\0')
		j++;
	for (; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
