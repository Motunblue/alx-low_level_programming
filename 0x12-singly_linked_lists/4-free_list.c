#include "lists.h"

/**
 * free_list - Frees a list_t
 * @head: head pointer
 */

void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	if (head->str)
		free(head->str);
	free(head);
}
