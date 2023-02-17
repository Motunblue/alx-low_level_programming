#include <stdio.h>

/**
 * main - Prints all possible combination of 2 digits
 *
 * Return: 0 if success
 */

int main(void)
{
	int n, i;

	for (n = 48; n <= 56; n++)
	{
		for (i = n + 1; i <= 57; i++)
		{
			putchar(n);
			putchar(i);
			if (n != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
