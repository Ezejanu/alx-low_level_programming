#include "lists.h"
#include <stdio.h>

/**
* print_listint - a function that prints all the elements of a listint_t list
* @h: list to be printed
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
