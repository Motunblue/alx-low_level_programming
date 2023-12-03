#include "main.h"

int count(char *s);
int to_int(char *n, int pos);
void rewrite_buffer(char *r, int size);

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
	int count_n1, count_n2, i, j = 0;
	int sum;
	int rem = 0;

	count_n1 = count(n1);
	count_n2 = count(n2);

	for (i = 0; i < count_n1 || i < count_n2 || rem > 0;
		count_n1--, count_n2--, j++)
	{
		sum = to_int(n1, count_n1) + to_int(n2, count_n2) + rem;
		rem = sum / 10;
		if ((j + 1) >= size_r)
			return (0);
		r[j] = sum % 10 + '0';
	}
	rewrite_buffer(r, j);
	r[j] = '\0';
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
 * rewrite_buffer - reverser chars in a buffer
 * @r: buffer to rewrite
 * @size: size of buffer from (result)
*/
void rewrite_buffer(char *r, int size)
{
	int i, j;
	char tmp;

	for (i = 0, j = size - 1; i < j; i++, --j)
	{
		tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}

}
