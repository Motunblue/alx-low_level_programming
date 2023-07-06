#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node a given position
 * @head: Head pointer
 * @idx: Index
 * @n: data to add
 * Return: ptr to added data
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *nod;

	if (!head || !*head)
		return (NULL);
	nod = malloc(sizeof(listint_t));
	if (!nod)
		return (NULL);
	nod->n = n;
	nod->next = NULL;
	for (i = 0; i < idx; i++)
	{
		if (tmp->next)
			tmp = tmp->next;
		else
			return (NULL);
	}
	nod->next = tmp;
	tmp->next = nod;
	return (nod);
}
