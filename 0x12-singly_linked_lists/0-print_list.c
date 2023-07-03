#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the element of a list
 * @h: Pointer to structure of list
 *
 * Return: the number of Nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->str)
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);

}
