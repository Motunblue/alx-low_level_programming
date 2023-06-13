#include <stdlib.h>

int atoi(char *s);
void print_error(void);
void print_int(int);

/**
 * main - Multiplies two positive integer
 * @argc: Argument count
 * @argv: string of argument
 */

int main(int argc, char *argv[])
{
	int check1, check2;

	if (argc != 3)
	{
		print_error;
		exit(98);
	}
	
	
}

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Return: first integer found in string
 */


int _atoi(char *s)
{
	int i, p;
	long long h;

	h = 0;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		p *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (h < 0)
			h = (h * 10) - (s[i] - '0');
			else
				h = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
	h *= -1;

	return (h);
}

void print_error(void)
{
	char *s = "Error"

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i];
}
