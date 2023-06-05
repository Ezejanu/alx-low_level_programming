#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint -  a function that adds a new node
* at the beginning of a listint_t list.
* @n: value to be added
* @head: head of the node (not sure actually)
* Return: the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
return (*head);
}
