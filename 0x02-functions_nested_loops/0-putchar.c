#include <stdio.h>

/**
 * main - Prints some strings
 *
 * Return: 1 if success
 */

int main(void)
{
	int j;
	char *i = "_putchar";

	for (j = 0 ; j <= 7 ; j++)
		putchar(i[j]);
	putchar('\n');
}
