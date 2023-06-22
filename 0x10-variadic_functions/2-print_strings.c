#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prins a string
 * @separator: string to be printed between the strings
 * @n: Number of strings passed to the function
 * Description: If seperator is NULL nothing is printed
 * If any string is NULL, (nil) is printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);

		if (!s)
			printf("(nill)");
		else
			printf("%s", s);
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
