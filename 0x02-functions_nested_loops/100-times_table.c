#include "main.h"

/**
 * print_times_table - prints the multiplication table
 * @n: number of times
 *
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, product;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				product = x * y;

				if (product >= 10 && product < 100)
				{
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product >= 100)
				{
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (y == 0)
					_putchar(product + '0');
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}
