#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: String to be scanned
 * @accept: character to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, same = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				same = 1;
				break;
			}
		}
		if (same)
			break;
	}

	return (s + i);
}
