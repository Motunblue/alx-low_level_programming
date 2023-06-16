#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings with n bytes of s2
 * @s1: First string
 * @s2: second string
 * @n: Number of bytes of string 2 to concat
 *
 * Return: Pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s = NULL;
	unsigned int count_s1 = 0, count_s2 = 0, i, j, size;

	if (s1 == NULL)
	{
		s = malloc(1);
		s[1] = '\0';
		return (s);
	}
	for (i = 0; s1[i] != '\0'; i++)
		count_s1++;
	if (s2 == NULL)
	{
		s = malloc(count_s1 + 1);
		if (s == NULL)
			return (NULL);
		for (i = 0; i < count_s1; i++)
			s[i] = s1[i];
		s[i] = '\0';
		return (s);
	}
	for (i = 0; s2[i] != '\0'; i++)
		count_s2++;
	if (n > count_s2)
		size = count_s2;
	else
		size = n;
	s = malloc(count_s1 + size + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < count_s1; i++)
		s[i] = s1[i];
	for (j = 0; j < size; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';

	return (s);
}
