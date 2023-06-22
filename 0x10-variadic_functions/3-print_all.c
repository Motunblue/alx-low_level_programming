#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: type of different prints
 */

void print_all(const char * const format, ...)
{
	int i = 0, flag = 1;
	char *s;
	va_list list;

	va_start(list, format);

	while (format && format[i] != '\0')
	{
		if (i && !flag)
			printf(", 0");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), flag = 0;
				break;
			case 's':
				s = va_arg(list, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
