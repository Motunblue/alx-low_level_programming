#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: Poiter to pointer to set
 * @to: Pointer to string to set to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
