#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **tmp = NULL, *tmp2;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	tmp = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		tmp2 = NULL;
		if (tmp[i] == NULL)
			continue;
		else
		{
			tmp2 = tmp[i];
			while (tmp2)
			{
				if (flag)
					printf(", ");
				flag = 1;
				printf("'%s': '%s'", tmp2->key, tmp2->value);
				tmp2 = tmp2->next;
			}
		}
	}
	printf("}\n");
}
