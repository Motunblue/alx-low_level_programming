#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints a fixed number of upcodes to main
 * @argc: Number of arguments
 * @argv: Arguments vector
 *
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int i, numb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numb = atoi(argv[1]);
	if (numb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < numb; i++)
	{
		if (i)
			printf(" ");
		printf("%02hhx", p[i]);
	}
	printf("\n");

	return (0);

}
