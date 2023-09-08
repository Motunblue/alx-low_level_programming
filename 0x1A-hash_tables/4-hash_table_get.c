#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get - Retrives the value of an associated key
 * @ht: hash table
 * @key: Key
 * Return: value of jkey or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int idx = 0;

	if (!ht || !key)
		return (NULL);
	/* Get hash index */
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
