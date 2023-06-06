#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
* print_listint_safe -  a function that prints a listint_t linked list
* (safe version)
* @head: pointer to the head of the list
* Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp1 = head;
	const listint_t *temp2 = head;
	int loop = 0;

	if (head == NULL)
	{
		exit(98);
	}
	else
	{
		while (temp1 && temp2 && temp2->next)
		{
			temp1 = temp1->next;
			temp2 = temp2->next->next;

			if (temp1 == temp2) /* there is a cycle */
			{
				loop = 1;
				break;
			}
		/*	count++;
			printf("%d\n", temp1->n); */
		}
		if (loop)
		{
	
			const listint_t *temp3 = head;
			const listint_t *check = temp1;

			while (temp3 != check)
			{
				printf("%d\n", temp3->n);
				temp3 = temp3->next;
				count++;
			}
			printf("%d\n", temp3->n);
			count++;
		}
		else
		{
			const listint_t *temp = head;
			 while (temp != NULL)
			{
				printf("%d\n", temp->n);
				temp = temp->next;
				count++;
			}
		}
	return (count);
	}
}
