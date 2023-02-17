#include <stdio.h>

/**
 * main - print the charater a-z except e and q
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n != 101 && n != 113)
			putchar(n);
	}
	putchar('\n');
	return (0);
}
