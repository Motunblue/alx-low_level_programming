#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: type of different prints
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, flag = 1;
	char *s;

	va_start(args, format);
	while (format[i] != '\0' && format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 0;
				break;
			case 's':
				s = va_arg(args, char*);
				if (!s)
					printf("(nil)");
				else
					printf("%s", s);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && (!flag))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
