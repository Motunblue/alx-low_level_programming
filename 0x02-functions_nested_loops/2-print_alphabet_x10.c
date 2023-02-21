#include "main.h"


/**
 * print_alphabet - prints a string of alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0; j < 26; j++)
			_putchar(i + 'a');
		_putchar('\n');
	}
}
