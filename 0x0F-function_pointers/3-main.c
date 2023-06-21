#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs an operation on 2 intergers
 * Operation can be Add, sub, mul, div, and mod only
 * @argc: Number of arguments to main
 * @argv: Elements int argurment
 *
 * Return: 1 if success
 */

int main(int argc, char *argv[])
{
	int numb1, numb2, result;
	int (*result_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[3]);

	result_ptr = get_op_func(argv[2]);
	if (result_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && numb2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = result_ptr(numb1, numb2);

	printf("%d\n", result);
	return (1);
}
