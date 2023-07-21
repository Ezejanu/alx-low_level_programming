#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns
 * the no of elements of a dlistint_t list.
 * @h: pointer to the head of the node
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
