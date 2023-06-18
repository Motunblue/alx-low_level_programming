#include "main.h"

/**
 * _strstr - Locates a substring
 *
 * @haystack: Pointer to main string
 * @needle: Pointer to substring
 *
 * Return: Pointer to locate substring is present or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, same;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		same = 0;
		j = 0;
		if (needle[j++] == haystack[i])
		{
			for (; needle[j] != '\0'; j++)
			{
				if (needle[j] == haystack[i + j])
				same = 1;
				else
				{
					same = 0;
					break;
				}
			}
		}
		if (same)
		return (haystack + i);
	}
	if (haystack[i] == '\0')
		return (haystack);
	return (0);
}
