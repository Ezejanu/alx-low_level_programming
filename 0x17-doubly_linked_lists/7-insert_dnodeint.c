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

	newNode = add_dnodeint(h, n);

	temp1 = *h;
	while (temp1 != NULL)
	{
		if (count == idx)
		{
			if (temp1->next == NULL)
			{
				temp1->next = newNode;
				newNode->prev = temp1;
			}
			else if (temp1->prev == NULL)
			{
				temp1->prev = newNode;
				newNode->next = temp1;
				*h = newNode;
			}
			else
			{
				temp2 = temp1->next;
				temp1->next = newNode;
				temp2->prev = newNode;
				newNode->next = temp2;
				newNode = temp1->prev;
			}
			return (newNode);
		}
		count++;
		temp1 = temp1->next;
	}
	free(newNode);
	return (NULL);
}
