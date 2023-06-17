#include "main.h"

/** print number - Prints an integer
 * @n: integer to print
 */

void print_number(int n)
{
	int x;
	int y = 0, z, h;
	char c;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	x = n;
	while (x >= 10)
	{
		x = x / 10;
		y += 1;
	}
		
	for (; y > 0; y--)
	{
		for (h = 1, z = y; z > 0; z --)
			h = h * 10;
		c = (((n / h) % 10) + 48);
		_putchar(c);
	}
	_putchar((n % 10) + 48);
}
