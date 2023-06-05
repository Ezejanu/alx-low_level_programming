#include "lists.h"
#include <stdlib.h>


/**
* sum_listint - a function that returns the sum of all the data
* (n) of a listint_t linked list
* @head: pointer to the head of the node
* Return: sum of the data in the list
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
