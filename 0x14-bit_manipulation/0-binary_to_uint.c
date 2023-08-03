#include "main.h"

int _strlen(const char *b);

/**
  * binary_to_uint - converts a binary number to integer
  * @b: string of 0 and 1
  * Return: converted int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, len, j = 1;
	int i;

	if (!b)
		return (0);
	len = _strlen(b);
	if (!len)
		return (0);
	n = b[--len] - '0';
	for (i = len - 1; i >= 0; i--)
	{
		j *= 2;
		n += (b[i] - '0') * j;
	}
	return (n);
}

/**
 * _strlen - Counts a string
 * @b: string to count
 * Return: result
 */

int _strlen(const char *b)
{
	int i;
	int count = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] - '0') > 1 || (b[i] - '0') < 0)
			return (0);
		count++;
	}
	return (count);
}
