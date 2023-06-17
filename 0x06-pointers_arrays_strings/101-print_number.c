#include "main.h"

/**
 * print_number - Prints an integer
 * @n: integer to print
 */

void print_number(int n)
{
	int x = n, p = n;
	int y = 0, z, h = 1;
	char c;

	if (n < 0)
	{
		_putchar('-');
		while (p < -10)
		{
			p = p / 10;
			y += 1;
		}
		for (; y > 0; y--)
		{
			for (h = 1, z = y; z > 0; z--)
				h = h * 10;
			c = (((n / h) % 10) * -1 + 48);
			_putchar(c);
		}
		_putchar((n % 10) * -1 + 48);
		return;
	}
	while (x >= 10)
	{
		x = x / 10;
		y += 1;
	}

	for (; y > 0; y--)
	{
		for (h = 1, z = y; z > 0; z--)
			h = h * 10;
		c = (((n / h) % 10) + 48);
		_putchar(c);
	}
	_putchar((n % 10) + 48);
}
