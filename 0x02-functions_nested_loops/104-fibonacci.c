#include<stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int a, b, c;

	a = 1;
	b = 2;
	i = 0;

	printf("%lu, %lu, ", a, b);

	while (i < 96)
	{
		c = a + b;
		printf("%lu", c);
		if (a < b)
			a = c;
		else
			b = c;
		i++;
		if (i != 96)
			printf(", ");
	}
	printf("\n");
	return (0);
}