#include "main.h"

/**
 * _isupper - Checks if a character is upper case
 * @c: Character to be checked
 *
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
