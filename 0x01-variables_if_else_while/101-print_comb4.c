#include <stdio.h>

/**
 * main - Prints all possible combination of 3 digits
 *
 * Return: 0 if success
 */

int main(void)
{
	int n, i, x;

	for (n = 48; n <= 55; n++)
	{
		for (i = n + 1; i <= 56; i++)
		{
			for (x = i + 1; x <= 57; x++)
			{
				putchar(n);
				putchar(i);
				putchar(x);
				if (n != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
