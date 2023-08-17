#ifndef LIST_H
#define LIST_H

#include <stdio.h>

/**
 * struct dlistint - structure for double linked list
 * @n: Data
 * @prev: pointer to previous node
 * @next: pointer to next node
 */
typedef struct dlistint
{
	int n;
	struct dlistint *next;
	struct dlistint *prev;
} dlistint_t;

/***** Fuction prototypes *******/
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif
