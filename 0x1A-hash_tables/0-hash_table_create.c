#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_node_create - a function to create a node of a hash table
 * @key: a unique key (string) in the hash table
 * @value: the value corresponding to the key
 * Return: a pointer to the created node
 

hash_node_t *hash_node_create(char *key, char *value)
{
	hash_node_t *hash_node;

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (NULL);

	hash_node->key = malloc(strlen(key) + 1);
	hash_node->value = malloc(strlen(value) + 1);
	strcpy(hash_node->key, key);
	strcpy(hash_node->value, value);

	return (hash_node);
}
*/


/**
 * hash_table_create - a function to create a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(hash_table->size, sizeof(hash_node_t *));
	return (hash_table);
}

