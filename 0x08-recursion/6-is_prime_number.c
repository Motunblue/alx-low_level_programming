#include "main.h"

/**
 * prime_check - Check for i is a prime number
 * @i: Number to check
 * @j: Temporary counter. Always 2
 *
 * Return: 1 if prime and 0 if not
 */

int prime_check(int i, int j)
{
	if (j == i)
		return (1);
	if((i % j) == 0)
		return (0);
	return (prime_check(i, j + 1));
}

/**
 * is_prime_number - Check for i is a prime number
 * @n: Number to check
 *
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	int x = 0;

	if (n < 1)
		return(0);
	if (n == 1)
		return (0);
	if (n == 1)
		return (1);

	x = prime_check(n, 2);
	return (x);

}
