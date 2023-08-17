#include "lists.h"

/**
 * print_dlistint - Print all element in a list
 * @h: head pointer
 * Return: Number of elements in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t i = 0;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
