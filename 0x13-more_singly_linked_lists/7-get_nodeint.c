#include <stdlib.h>
#include "lists.h"


/**
* get_nodeint_at_index - a function that returns
* the nth node of a listint_t linked list
* @head: pointer to the head node
* @index: index for which the value of the node is to be found
* Return: node at nth index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
