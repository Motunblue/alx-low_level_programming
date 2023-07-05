#include "lists.h"

/**
 * listint_len - Returns the number of element in a list
 * @h: Pointer to list
 * Return: result
 */
size_t listint_len(const listint_t *h)
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
