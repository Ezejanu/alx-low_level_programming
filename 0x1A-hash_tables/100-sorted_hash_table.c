#include "hash_tables.h"

/**
 * shash_table_create - a function to create a hash table
 * Return: pointerto the new table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;

	hash_table = malloc(sizeof(shash_table_t));
	hash_table->size = size;
	hash_table->array = calloc(hash_table->size, sizeof(shash_node_t);

	return table;
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 * 
 * Return: 1 for success, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *ptr;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size; ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = value;
			return (1);
		}
		ptr = ptr->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_mode == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->prev = NULL;
	new_node->next = NULL;


	while (ptr != NULL)

	for (i = 0; i < ht->size, i++)

}
