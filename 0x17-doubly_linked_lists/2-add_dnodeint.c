#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: double pointer to head node
 * @n: value to be added
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	if (head == NULL || *head == NULL)
	{

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;
	*head = newNode;
	}

	else
	{
		newNode->prev = NULL;
		newNode->n = n;
		newNode->next = *head;

		(*head)->prev = newNode;
		*head = newNode;
	}

	return (newNode);
}
