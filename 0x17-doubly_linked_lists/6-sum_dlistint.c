#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum
 * of all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the node
 * Return: the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int total = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
