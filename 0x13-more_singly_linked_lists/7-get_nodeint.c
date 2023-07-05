#include "lists.h"

/**
 * get_nodeint_at_index - Get node at an index
 * @head: Head pointer
 * @index: The index
 * Return: located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;
	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (tmp->next)
			tmp = tmp->next;
		else
			return (NULL);
	}
	return (tmp);
}
