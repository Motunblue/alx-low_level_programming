#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the name of of the program
 * @argc: Number of arguments to main
 * @argv: String characters of each argument
 *
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
