#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept:: What to check
 *
 * Return: length of accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, same, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		same = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				printf("J is %c and i is %c\n", accept[j], s[i]);
				same = 1;
				break;
			}
		}
		if (same)
			len++;
		else
			break;
	}
	return (len);
}
