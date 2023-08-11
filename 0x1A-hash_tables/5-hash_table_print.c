#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL;
	int commaflag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
		if (commaflag == 1)
			printf(", ");
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (temp != NULL)
				printf(", ");
		}
		commaflag = 1;
		}
	}
	printf("}\n");
}
