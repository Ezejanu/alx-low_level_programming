#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - a function that adds a new node
* at the end of a listint_t list
* @n: value to be added
* @head: head
* Return: pointer to the head of the list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head =	newNode;
	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
	lastNode->next = newNode;
	}
	return (*head);
}
