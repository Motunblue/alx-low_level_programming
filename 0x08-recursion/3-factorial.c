 #include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: interger number to calcute
 * Return: Factorial of number or (-1) if error
 */
int factorial(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
