#include <stdio.h>

/**
 * main - prints the charater z-a
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
