#include "main.h"

int count(char *s);
int to_int(char *n, int pos);
void write_to_buffer(char *result, char *r, int size);

/**
 * infinite_add - Adds 2 numbers
 * @n1: Number 1
 * @n2: Number 2
 * @r: The buffer where the result is stored
 * @size_r: Size of buffer (r)
 * Return: The buffer r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int max;
	int count_n1, count_n2, i, j = 0;
	int sum;
	int rem = 0;
	char result[size_r - 1];

	count_n1 = count(n1);
	count_n2 = count(n2);

	if (count_n1 > count_n2)
		max = count_n1;
	else
		max = count_n2;
	for (i = 0; i < count_n1 || i < count_n2 || rem > 0;
		count_n1--, count_n2--, j++)
	{
		sum = to_int(n1, count_n1) + to_int(n2, count_n2) + rem;
		rem = sum / 10;
		if ((j + 1) >= size_r)
			return (0);
		result[j] = sum % 10 + '0';
	}
	write_to_buffer(result, r, j);
	return (r);
}


/**
 * count - Count a string
 * @s: string to count
 * Return: result
*/
int count(char *s)
{
	int x = 0;

	while (*s++ != '\0')
		x++;
	return (x);
}

/**
 * to_int - convert a char to an int
 * @n: Array containing character
 * @pos: position of character to convert
 * Return: int from char
*/
int to_int(char *n, int pos)
{
	if (pos <= 0)
		return (0);
	return (n[pos - 1] - '0');
}

/**
 * write_to_buffer - Write from a buffer to another in reverse order
 * @result: buffer from
 * @r: buffer to
 * @size: size of buffer from (result)
*/
void write_to_buffer(char *result, char *r, int size)
{
	int i, j;

	for (i = 0, j = size - 1; i < size; i++, --j)
		r[i] = result[j];
	r[i] = '\0';
}
