#include <stdio.h>

/**
 * main - print the charater a-z and A-Z
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		putchar(n);
	for (n = 65; n <= 90; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
