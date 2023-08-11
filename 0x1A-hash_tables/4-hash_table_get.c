#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table to be looked into
 * @key: the key to be found
 *
 * Return:  the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}
