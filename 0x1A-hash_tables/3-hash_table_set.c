#include "hash_tables.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 for success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *ptr = NULL;
	unsigned long int new_node_index = 0;
	
	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);

	new_node_index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[new_node_index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
		}
		ptr = ptr->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (new_node->key == NULL || new_node->value == NULL)
		return (0);
	
	if (ht->array[new_node_index] == NULL)
		ht->array[new_node_index] = new_node;
	else
	{
		new_node->next = ht->array[new_node_index];
		ht->array[new_node_index] = new_node;
	}
	return (1);
}
