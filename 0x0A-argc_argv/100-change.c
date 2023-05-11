#include <stdio.h>
#include <stdlib.h>

void calc_change(int);

/**
 * main - Prints the minimum number of coint to make changes to an amount
 * Coins can be in value of 25, 10,15, 2, 1 cents
 * @argc: Argument count
 * @argv: string of arguments
 *
 * Return: (0) is success (1) is error
 */

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}
	cents = atoi(argv[1]);
	calc_change(cents);
	return (0);
}

/**
 * calc_change - Calculates the change from a coin
 * @cents: the amount to calculate (int)
 */

void calc_change(int cents)
{
	int values[] = {25, 10, 5, 2, 1};
	int i = 0, sum = 0;

	while (cents)
	{
		if (cents == values[i])
		{
			sum += 1;
			break;
		}
		while (cents >= values[i])
		{
			cents = cents - values[i];
			sum += 1;
		}
		i++;
	}
	printf("%d\n", sum);
}
