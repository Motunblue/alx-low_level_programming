#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 *
 * Return : void
 */

void print_rev(char *s)
{
	char *p, *q;

	p = s;
	q = s;

	while (*q != '\0')
	{
		p++;
		q++;
	}

	while (p != s)
	{
		_putchar(*p);
		p--;
	}
	_purchar(*s);
	_putchar('\n');
}
