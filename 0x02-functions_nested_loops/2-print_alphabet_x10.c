#include <stdio.h>

void print_alphabet_x10(void);

/**
 * main - Calls print alphabet x10
 *
 * Return: 0 if success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints a string of alphabet 10 times
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0; j < 26; j++)
			putchar(i + 'a');
		putchar('\n');
	}
}
