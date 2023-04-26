#include "main.h"

/**
 * _pow_recursion - Calculate the power of a number
 * @x: Number to power
 * @y: Number to ve powered to
 *
 * Return: Power of the number x ^ y or -1 if error
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return(x * _pow_recursion(x, y - 1));

}
