#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: string of name to print
 * @f: Pointer to fuction that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
