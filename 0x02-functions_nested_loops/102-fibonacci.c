#include<stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long long int a, b, c;

	a = 1;
	b = 2;
	i = 0;

	printf("%llu, %llu, ", a, b);

	while (i < 48)
	{
		c = a + b;
		printf("%llu", c);
		if (a < b)
			a = c;
		else
			b = c;
		i++;
		if (i != 48)
			printf(", ");
	}
	printf("\n");
}
