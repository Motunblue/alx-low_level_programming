#include "main.h"

/**
 * _abs - Calculate absolute value of a number
 * @n: number to be checked
 *
 * Return: the result
 */

int _abs(int n)
{
	int a;

	if (n < 0)
		a = -1 * n;
	else
		a = n;
	return (a);
}
