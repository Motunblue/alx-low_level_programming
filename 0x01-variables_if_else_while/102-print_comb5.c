#include <stdio.h>

/**
 * main - Prints all possible combination of 3 digits
 *
 * Return: 0 if success
 */

int main(void)
{
	int n, i, x, y;

	for (n = 48; n <= 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (x = 48; x <= 57; x++)
			{
				for (y = x + 1, y <= 57 y++)
				{
					putchar(n);
					putchar(x);
					putchar(' ');
					putchar(i);
					putchar(y);
					if (n + x + y + i != 227)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
