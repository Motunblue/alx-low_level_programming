#include "lists.h"

/**
 * dlistint_len - Count elemet of a list
 * @h: head pointer
 * Return: result
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t i = 0;

	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
