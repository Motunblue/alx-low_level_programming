#include "main.h"

/**
 * _islower - checks if a character is in upper or lowwer case
 * @c: Character to be checked
 *
 * Return: 1 if true and 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
