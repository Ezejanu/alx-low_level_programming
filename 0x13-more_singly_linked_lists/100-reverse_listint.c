#include "lists.h"
#include <stdlib.h>

/**
* reverse_listint - a function that reverses a listint_t linked list
* @head: double pointer to the head of the node
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{

	if (head == NULL)
		return (NULL);
	if (*head != NULL)
	{
		listint_t *prevNode = *head;
		listint_t *temp = *head;
		listint_t *currNode = (*head)->next;

		prevNode->next = NULL;

	while (currNode != NULL)
	{
		temp = currNode->next;
		currNode->next = prevNode;
		prevNode = currNode;
		currNode = temp;
	}
	*head = prevNode;
	}
	return (*head);
}
