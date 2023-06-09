#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* print_list - a function that prints all the elements of a list_t list
* @h: pointer to the first node
* Return: number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;


	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
