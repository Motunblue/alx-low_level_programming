#include "main.h"
/**
 * _puts_recursion - Puts a string using recursion
 * @s: Pointer to string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(++s);
}

