#include "lists.h"

/**
 * free_listint - Frees a listint_t
 * @head: head pointer
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
	free(head);
}
