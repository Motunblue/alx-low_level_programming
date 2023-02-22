#include <stdio.h>

/**
 * main - print sum of even terms of a Fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned int a, b, c, sum;

	a = 1;
	b = 2;
	i = 0;
	sum = 2;

	while (i < 30)
	{
		c = a + b;
		if (a < b)
			a = c;
		else
			b = c;
		if ((c % 2) == 0)
			sum += c;
		i++;
	}
	printf("%d\n", sum);
}
