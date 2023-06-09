#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - a function that deletes the node at index index
* of a listint_t linked list
* @head: double pointer to the head of the node
* @index: is the index of the node that should be deleted. Index starts at 0
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *curr = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (curr != NULL)
	{
		if (count == index)
		{
			prev->next = curr->next;
			free(curr);
			return (1);
		}

	prev = curr;
	curr = curr->next;
	count++;
	}
	return (-1);
}
