#include "lists.h"

/**
 * add_nodeint - Adds a node at tye begginig of a list
 * @head: pointer to pointer to most head node
 * @n: data to add
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

