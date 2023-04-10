#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: Pointer to string
 * @c: Character to locate
 *
 * Return: Pointer to first occurance of character
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == '\0')
		return (s + i);
}
