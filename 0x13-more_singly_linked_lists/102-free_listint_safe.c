#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
* free_listint_safe -  a function that frees a listint_t list
* @h: double pointer to the head of the linked list
* Return: the size of the list that was freed
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *setter;

	if (h == NULL || *h == NULL)
		return;
	temp = *h;
	while (temp)
	{
		setter = temp->next;
		free(temp);
		temp = setter;
	}
		*h = NULL;
	return(0);
}
