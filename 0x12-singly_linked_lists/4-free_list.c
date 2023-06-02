#include "lists.h"
#include <stdlib.h>

/**
* free_list - a function that frees a list_t list
* @head: list to be freed
*/

void free_list(list_t *head)
{
	list_t *holder;

	while (head)
	{
		holder = head->next;
		free(head->str);
		free(head);
		head = holder;
	}
}
