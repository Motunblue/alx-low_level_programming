#include <stdio.h>

/**
 * main - Calls print alphabet
 * print_alphabet - prints a string of alphabet
 *
 * Return: 0 if success
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i;
	char *j = "_putchar";

	for (i = 0 ; i <= 7 ; i++)
		putchar(j[i]);
	putchar('\n');
}
