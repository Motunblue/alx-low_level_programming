#include "main.h"

/**
 * _strcmp - Comapare two sting
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the difference in string
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		j = s1[i] - s2[i];
		if (j != 0)
			break;
	}
	return (j);
}
