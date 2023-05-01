#include "main.h"

/**
 * sqrt_check - Checks the square root of a number
 * @i: Number to square root
 * @j: temporary counter. Always set to 1
 *
 * Return: Square root of number i or -1 if error
 */

int sqrt_check(int i, int j)
{
	if (j == i)
		return (-1);
	if((j * j) == i)
		return (j);
	return sqrt_check(i, j + 1);
}

/**
 * _sqrt_recursion - Calculates the squareroot of number n
 * @n:Number to square root
 *
 * Return: Square root of number i or -1 if error
 */

int _sqrt_recursion(int n)
{
	int x = 0;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	x = sqrt_check(n, 1);
	return x;

}
