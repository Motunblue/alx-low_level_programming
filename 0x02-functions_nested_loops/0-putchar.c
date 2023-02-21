#include "main.h"

/**
 * print_alphabet - Prints some strings
 *
 * Return: 0 if success
 */

void print_alphabet(void)
{
	int j;
	char *i = "_putchar";

	for (j = 0 ; j <= 7 ; j++)
		_putchar(i[j]);
	_putchar('\n');
	return (0);
}
