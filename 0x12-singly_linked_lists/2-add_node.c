#include "list.h"
#include <strings.h>

/**
 * add_node - Adds a node at tye begginig of a list
 * @head: pointer to pointer to most head node
 * @str: string to add to node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t);
	if (ptr == NULL)
		return (NULL);
	ptr->len = strlen(str);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
		return (NULL);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
