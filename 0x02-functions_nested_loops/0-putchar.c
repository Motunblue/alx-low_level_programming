#include "main.h"

/**
 * main - calls print alphabet
 *
 * Return: 0 if success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints some strings
 */

void print_alphabet(void)
{
	int j;
	char *i = "_putchar";

	for (j = 0 ; j <= 7 ; j++)
		_putchar(i[j]);
	_putchar('\n');
}
