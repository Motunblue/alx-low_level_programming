#include "lists.h"

/**
 * sum_dlistint - sums the data in a list
 * @head: head pointer
 * Return: result
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
