#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: Key
 * @value: value
 * Return: 1 is successful and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new = NULL, *tmp = NULL;

	if (ht == NULL || !ht->array || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0 || ht->size == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (0);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
