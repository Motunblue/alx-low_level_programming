#include "main.h"

/**
 * infinite_add - Adds 2 numbers
 * @n1: Number 1
 * @n2: Number 2
 * @r: The buffer where the result is stored
 * @sizer: Size of buffer (r)
 */

int count(char*);

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x;
	int count_n1, count_n2;

	count_n1 = count(n1);
	count_n2 = count(n2);

	if (size_r < (count_n1 + 1) || size_r < (count_n2 +  1))
		return (0);
	for (x = 0; x < count_n1 && x < count_n2; x++)
}

int count(char *s)
{
	int x = 0;

	while (s[i++] != '\0')
		x++;
	return (x);
}
