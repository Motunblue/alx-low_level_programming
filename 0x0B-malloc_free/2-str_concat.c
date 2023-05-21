#include "main.h"
#include <stdlib.h>

/**
 * count - counts characters of a string
 * @s: sting to count
 *
 * Return: count of string
 */

int count(char *s)
{
	int counts = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		counts++;
	return (counts);
}

/**
 * str_concat - concatenated 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Pointer to result
 */

char *str_concat(char *s1, char *s2)
{
	int c_s1, c_s2, i = 0, j;
	char *cat;

	if (s1 == NULL && s2 == NULL)
	{
		cat = malloc(1);
		cat[0] == '\0';
		return (cat);
	}
	if (s1 == NULL)
	{
		c_s2 = count(s2);
		cat = malloc(c_s2 + 1);
		for (i = 0; i < c_s2; i++)
			cat[i] = s2[i];
		cat[i] = '\0';
		return (cat);
	}
	if (s2 == NULL)
	{
		c_s1 = count(s1);
		cat = malloc(c_s1 + 1);
		for (i = 0; i < c_s1; i++)
			cat[i] = s1[i];
		cat[i] = '\0';
		return (cat);
	}

	cat = malloc(c_s1 + c_s2  + 1);
	for (i = 0; i < c_s1; i++)
		cat[i] = s1[i];
	for (j = 0; j < c_s2; j++, i++)
		cat[i] = s2[j];
	cat[i] = '\0';

	return (cat);
}
