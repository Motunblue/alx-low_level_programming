#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at an index
 * @h: Pointer to node list
 * @idx: index to insert at
 * @n: data for new node
 * Return: new node address or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	while (tmp->next && (i < idx - 1))
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
	}
	else
	{
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next->prev = new;
		tmp->next = new;
	}
	return (new);
}
