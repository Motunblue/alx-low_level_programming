#include "lists.h"

/**
 * sum_listint - Sums data in a list
 * @head: Heas pointer
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
