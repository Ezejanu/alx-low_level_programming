#include "lists.h"
#include <stdlib.h>

/**
* find_listint_loop - a function that finds the loop in a linked list.
* @head: pointer to the head of the linked list
* Return: The address of the node where the loop starts
* or NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowCount = head;
	listint_t *fastCount = head;

	if (head == NULL)
		return (NULL);

	while (slowCount && fastCount && fastCount->next)
	{
		slowCount = slowCount->next;
		fastCount = fastCount->next->next;
		if (slowCount == fastCount)
		{
			slowCount = head;
			while (slowCount != fastCount)
			{
				slowCount = slowCount->next;
				fastCount = fastCount->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
