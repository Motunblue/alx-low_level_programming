#include "main.h"

/**
 * get_endianess - Checks the endiannes
 * Return: 0 if little big endian and 1 if little
 */

int get_endianness(void)
{
	int check = 1;
	char *checker;

	checker = (char *)&check;
	if (*checker)
		return (1);
	return (0);
}
