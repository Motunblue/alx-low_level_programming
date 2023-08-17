#include "lists.h"

/**
 * add_dnodeint - Added a node at the beginning of a list
 * @head: head pointer
 * @n: Data for new node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!head)
		return (NULL);
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	/* Special case for if head is points to NULL) */
	if (!*head)
		new->next = NULL;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
