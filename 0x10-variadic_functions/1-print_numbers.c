#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints number followed by a new line
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed in the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(list);

	printf("\n");
}
