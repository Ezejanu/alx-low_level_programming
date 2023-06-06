#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
* nodes_in_Loop - a function to find the number of nodes contained in a loop
* @head: a pointer to the head of the linked list
* Return: the length of the nodes in the loop
*/



size_t nodes_in_Loop(const listint_t *head)
{
	const listint_t *slowCount = head, *fastCount = head;
	size_t count = 0;
	const listint_t *temp;

	while (slowCount && fastCount && fastCount->next)
	{
		slowCount = slowCount->next;
		fastCount = fastCount->next->next;

		if (slowCount == fastCount)
		{
			count++;
			temp = slowCount;

		while (temp != fastCount)
		{
			temp = temp->next;
			count++;
		}

		return (count);
		}
	}
	return (0);
}


/**
* print_listint_safe -  a function that prints a listint_t linked list
* (safe version)
* @head: pointer to the head of the list
* Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{

	size_t loopNodes, count;

	loopNodes = nodes_in_Loop(head);

	if (head == NULL)
	{
		exit(98);
	}

	if (loopNodes == 0)
	{
		for (count = 0; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (count = 0; count < loopNodes; count++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
		printf("[%p] %d\n", (void *) head, head->n);
	}
	return (count);
}
