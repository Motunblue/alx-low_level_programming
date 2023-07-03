#include "lists.h"
#include <stdio.h>

/**
 * list_len - Prints the number of elements in a list
 * @h: Pointer to structure of list
 *
 * Return: the number of Nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);

}
