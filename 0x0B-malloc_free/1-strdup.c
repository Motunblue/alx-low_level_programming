#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Makes a copy of the string given as parameter
 * @str: string paramenter
 *
 * Return: Pointer to newly allocated string
 */

char *_strdup(char *str)
{
	char *c;
	int i, count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	c = malloc(count + 1);
	if (c == NULL)
		return (NULL);
	for (i = 0; i = count; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
