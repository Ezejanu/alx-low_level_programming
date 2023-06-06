#include "lists.h"
#include <stdlib.h>



/**
* pop_listint - a function that deletes the head node
* of a listint_t linked list, and returns the head node’s data (n)
* @head: double pointer to the head of the linked list
* Return: the head node’s data (n)
*/


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int store = (*head)->n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;

	*head = (*head)->next;
	free(temp);

	return (store);
}
