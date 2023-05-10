#include <stdio.h>
#include <stdlib.h>


int check_string(char s[]);

/**
 * main - Print the name of of the program
 * @argc: Number of arguments to main
 * @argv: String characters of each argument
 *
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (check_string(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * check_string - Checks if string can be converted to an interger
 * @s: string to check
 * Return: (0) is true and (1) is not.
 */

int check_string(char s[])
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (s[i] == j)
				return (0);
		}
	}
	return (1);
}
