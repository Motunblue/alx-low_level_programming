#include "main.h"


/**
 * print_alphabet - prints a string of alphabet
 */

void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
		_putchar(i + 'a');
	_putchar('\n');
}
