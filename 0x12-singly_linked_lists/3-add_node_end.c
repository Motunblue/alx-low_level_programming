#include "lists.h"
#include <string.h>

int _strlen(const char *s);

/**
 * add_node_end - Addes a node at the end
 * @str: data to add
 * @head: head pointer
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *temp = NULL;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = _strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = ptr;
	return (*head);
}

/**
 * _strlen - counts a string
 * @s: string to count
 * Return: result
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
