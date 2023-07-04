#include "lists.h"
#include <string.h>

int _strlen(const char *s);

/**
 * add_node - Adds a node at tye begginig of a list
 * @head: pointer to pointer to most head node
 * @str: string to add to node
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

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
	ptr->next = *head;
	*head = ptr;
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
