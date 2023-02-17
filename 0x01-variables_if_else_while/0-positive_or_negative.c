#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints whether random  number is positive or negative
 *
 * Return: 0 if success
 */
int main(void)
{

	srand(time(0));
	int n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
