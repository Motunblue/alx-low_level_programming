#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head: Head pointer
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	if ((*head)->next)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	else
		free(*head);

	return (data);
}
