#include "main.h"
/**
 * _strlen_recursion - calculates the lenght of a string
 * @s: The string to examine
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
