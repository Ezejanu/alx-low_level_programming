#include "lists.h"
#include <stdlib.h>

/**
* reverse_listint - a function that reverses a listint_t linked list
* @head: double pointer to the head of the node
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *temp;

	while (curr != NULL)
	{
		temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	*head = prev;

	return (*head);
}
