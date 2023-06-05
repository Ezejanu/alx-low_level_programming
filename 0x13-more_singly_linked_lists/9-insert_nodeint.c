#include "lists.h"
#include <stdlib.h>


/**
* insert_nodeint_at_index - a function that inserts
* a new node at a given position
* @head: double pointer to the head of the node
* @idx: the index of the list where the new node should be added
* @n: value to be inserted
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *temp = *head;
	/*
	*	if (idx < 0)
	*	return (NULL);
	*/

	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		listint_t *newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (temp != NULL)
	{
		count++;
		if (count == idx)
		{
			listint_t *newNode = (listint_t *) malloc(sizeof(listint_t));

			if (newNode == NULL)
				return (NULL);
			newNode->n = n;
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;
	}
	return (NULL);
}
