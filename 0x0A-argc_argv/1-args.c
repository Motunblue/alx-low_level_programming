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
	if (argv != NULL)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
