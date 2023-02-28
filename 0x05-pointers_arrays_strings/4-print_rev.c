#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 *
 * Return : void
 */

void print_rev(char *s)
{
	char *p;

	p = s;

	while (*p != '\0')
	{
		p++;
	}

	while (p != s)
	{
		p--;
		_putchar(*p);
	}
	_putchar('\n');
}
