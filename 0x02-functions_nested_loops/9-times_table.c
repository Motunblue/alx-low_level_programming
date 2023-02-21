#include "main.h"

/**
 * times_table - prints the multiplication table
 *
 * Return: void
 */

void times_table(void)
{
	int x, y, product;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			product = x * y;

			if (product >= 10)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else if (y == 0)
				_putchar(product + '0');
			else
			{
				_putchar(' ');
				_putchar(product = '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
