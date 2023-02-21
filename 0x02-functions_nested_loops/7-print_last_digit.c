#include "main.h"

/**
 * print_last_digit - Calculate last digit of a number
 * @n: number to be checked
 *
 * Return: the result
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = (n % 10) * -1;

	else
		a = n % 10;

	_putchar(a + '0');
	return (a);
}
