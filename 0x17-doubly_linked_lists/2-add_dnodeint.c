#include "lists.h"

/**
 * add_dnodeint - Added a node at the beginning of a list
 * @head: head pointer
 * @n: Data for new node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!head)
		return (NULL);
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = *head;
	/* Special case for if head is points to NULL) */
	if (!*head)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	*head = new;
	new->next = tmp;
	tmp->prev = new;
	return (new);
}
