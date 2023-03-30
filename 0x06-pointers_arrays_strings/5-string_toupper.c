#include "main.h"

/**
 * string_toupper - converts a string to uppercase
 *
 * @s: pointer to string to be converted
 * Return: pointer to converted string
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 112)
			s[i] = s[i] - 32;
	}

	return (s);
}
