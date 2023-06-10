#include <stdio.h>

/**
 * main - Print the name of of the program
 * @argc: Number of arguments to main
 * @argv: String characters of each argument
 *
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
