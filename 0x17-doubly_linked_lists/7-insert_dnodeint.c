#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index -  a function that inserts a new node
 * at a given position
 * @h: a double pointer to the head
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: value to be inserted at index idx
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1, *temp2;
	dlistint_t *newNode;
	unsigned int count = 0;

	temp1 = *h;
	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	while (temp1 != NULL)
	{
		if (count == idx)
		{
			if (temp1->next == NULL)
				newNode = add_dnodeint_end(h, n);
			else
			{
				newNode = malloc(sizeof(dlistint_t));
				if (newNode == NULL)
					return (NULL);

				temp2 = temp1->prev;
				temp1->prev = newNode;
				temp2->next = newNode;
				newNode->n = n;
				newNode->next = temp1;
				newNode->prev = temp2;
			}
			return (newNode);
		}
		count++;
		temp1 = temp1->next;
	}
	return (NULL);
}
