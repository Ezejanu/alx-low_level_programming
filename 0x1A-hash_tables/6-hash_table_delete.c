#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr1, *ptr2;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		ptr1 = ht->array[i];

		while (ptr1 != NULL)
		{
			free(ptr1->key);
			free(ptr1->value);

			ptr2 = ptr1->next;
			free(ptr1);
			ptr1 = ptr2;
		}
	}
	free(ht->array);
	free(ht);
}
