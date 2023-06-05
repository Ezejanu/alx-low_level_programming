#include <stdio.h>
#include "lists.h"

/**
* listint_len - a function that returns the number of elements
* in a linked listint_t list.
* @h: the list whose number of elements is to be found
* Return: the number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
