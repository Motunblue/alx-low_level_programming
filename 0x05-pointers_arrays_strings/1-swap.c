#include include main.h

/**
 * swap_int - swap the vlue of 2 integer
 * @a: int 1
 * @b: int 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
