#include "main.h"
#include <stdlib.h>

/**
 * strc - counts a string
 * @s: string to count
 *
 * Return: result
 */

int strc(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}

/**
 * argstostr - Concatenates teh arguments to a program
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, c = 0;
	char *s = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	c += strc(av[i]);

	s = malloc(sizeof(char) * (c + ac + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];
		s[k++] = '\n';
	}
	s[k] = '\0';

	return (s);
}
