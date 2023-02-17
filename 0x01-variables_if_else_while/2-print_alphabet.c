#include <stdio.h>

/**
 * main - pritns the charater a-z
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
