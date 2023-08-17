#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: Pointer to list head
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	free_dlistint(head->next);
	free(head);
}
