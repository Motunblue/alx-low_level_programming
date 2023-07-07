#include "main.h"

int _strlen(const char *b);
/**
 * binary_to_uint - converts binary to int
 * @b: string of 0 and 1
 * Return: The converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 1, count;
	unsigned int result;

	if (!b)
		return (0);
	count = _strlen(b);
	if (!count)
		return (0);
	--count;
	result = 1 * (b[count--] - '0');
	for (i = 0; i <= count; count--)
	{
		j *= 2;
		result += ((b[count] - '0') * j);

	}
	return (result);
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
