#include <stdio.h>

void print_alphabet(void);

/**
 * main - Calls print alphabet
 *
 * Return: 0 if success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints a string of alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;
	char *j = "_putchar";

	for (i = 0 ; i <= 7 ; i++)
		putchar(j[i]);
	putchar('\n');
}
