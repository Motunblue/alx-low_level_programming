#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a list
 * @head: head pointer
 * @index: index to get
 * Return: node at index or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while(tmp && (i < index))
	{
		tmp = tmp->next;
		i++;
	}
	if (index > ++i)
		return (NULL);
	return (tmp);
}
