#include "main.h"
#include <stdlib.h>

/**
 * count_str - Counts a string
 * The string can be null terminated or terminated by a space
 * @s: Input string
 *
 * Return: Count of string
 */
int count_str(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * putstring - Copy a string from one memory location to another
 * @dest: Destination string
 * @src: Source
 * @size: Number of characters on the string excluding null
 */
void putstring(char *dest, int size, char *src)
{
	int i;

	for (i = 0; i < size; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

/**
 * word_count - Counts the number of word in a string
 * Words are seperated by a space
 * @s: String to count
 * Return: Number of word
 */

int word_count(char *s)
{
	int count = 0, in_word = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == ' ')
			in_word = 0;
	}
	return (count);
}

/**
 * strtow - Splits a string int words
 * Words are seperatated by space
 * @str: String to split
 *
 * Return: Pointer to an array of strings or NULL if str = NULL
 */
char **strtow(char *str)
{
	int i = 0, j, k, wc = 0, size = 0;
	char **s = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (wc + 1));
	if (s == NULL)
		return (NULL);

	for (j = 0, i = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
			continue;
		size = count_str(str + j);
		s[i] = malloc(sizeof(char) * (size + 1));
		if (s[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		putstring(s[i++], size, (str + j));
		j = j + size - 1;
	}
	s[i] = NULL;

	return (s);
}
