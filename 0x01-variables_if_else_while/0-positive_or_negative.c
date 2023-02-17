#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints whether random  number is positive or negative
 * @n: Randon number generated
 *
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is poositive\n", n);
}
