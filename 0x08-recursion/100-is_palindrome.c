#include "main.h"


int check_palindrome(char*, char*);
void _revstring(char*, int);
void _strcpy(char*, char*, int);

/**
 * is_palindrome - Checks if a string is Palindrome
 * @s: String to check
 *
 * Return: 1 if Palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	char rvs[i];

	_strcpy(s, rvs, i);
	_revstring(rvs, i);
	return (check_palindrome(s, rvs));
}


/**
 * check_palindrome - Checks if a string is Palindrome
 * @s: String to check
 * @rvs: s in reverse
 *
 * Return: 1 if Palindrome and 0 if not
 */

int check_palindrome(char *s, char *rvs)
{
	if (*s == '\0')
		return (1);
	if (*s != *rvs)
		return (0);
	return (check_palindrome(s + 1, rvs + 1));
}

/**
 * _revstring - Reverses a string
 * @c: String to reverse
 * @i: string length
 */

void _revstring(char *c, int i)

{
	char c2;
	int j;

	for (j = 0; j < i; j++)
	{
		i--;
		c2 = c[j];
		c[j] = c[i];
		c[i] = c2;
	}
}

/**
 * _strcpy - Copies a string
 * @src: Source
 * @dest: Destination
 * @i: Length of string
 */

void _strcpy(char *src, char *dest, int i)
{
	int j;

	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';
}
