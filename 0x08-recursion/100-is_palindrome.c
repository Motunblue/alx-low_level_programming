#include "main.h"


int check_palindrome(char*, char*);
int _strlen(char *);

/**
 * is_palindrome - Checks if a string is Palindrome
 * @s: String to check
 *
 * Return: 1 if Palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;

	i = _strlen(s);

	return (check_palindrome(s, s + i - 1));
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
	return (check_palindrome(s + 1, rvs - 1));
}

/**
 * _strlen - Count a string
 * @s: String to count
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
