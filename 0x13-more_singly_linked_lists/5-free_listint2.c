#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - a function that frees a listint_t list.
* @head: double pointer to the head
*/


void free_listint2(listint_t **head)
{
	listint_t *temp, *setter;

	temp = *head;
	while (temp)
	{
		setter = temp->next;
		free(temp);
		temp = setter;
	}
		*head = NULL;
}
