#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: key to assess
 * @size: size of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);

	return (i % size);
}
