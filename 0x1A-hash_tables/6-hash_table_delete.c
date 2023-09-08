#include "hash_tables.h"
#include "stdio.h"
#include "stdlib.h"

void free_node(hash_node_t *head);

/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		else
		{
			tmp = ht->array[i];
			free_node(tmp);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_node - Frees a node
 * @head: head pointer
 */

void free_node(hash_node_t *head)
{
	if (!head)
		return;

	free_node(head->next);
	if (head->key)
		free(head->key);
	if (head->value)
		free(head->value);
	free(head);
}
