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
	listint_t *temp;
	int set;
	size_t count;

	if (h == NULL || *h == NULL)
		return;
	temp = *h;
	while (temp)
	{
		set = *h - *h->next;
		if (set > 0)
		{
			temp = *h->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(temp);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return(count);
}
