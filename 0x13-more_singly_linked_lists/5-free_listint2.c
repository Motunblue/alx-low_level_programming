#include "lists.h"

void free_list(listint_t *h);

/**
 * free_listint2 - Frees a listint_t
 * @head: head pointer
 */
void free_listint2(listint_t **head)
{

	free_list(*head);
	*head = NULL;
}

/**
 * free_list - Free a list recursively
 * @h: Head pointer
 */
void free_list(listint_t *h)
{
	if (!h)
		return;

	free_list(h->next);
	free(h);
}
