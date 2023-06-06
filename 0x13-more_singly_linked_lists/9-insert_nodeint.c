#include "lists.h"
#include <stdlib.h>

/**
* nodeSize - a function to find the size of the node
* @node: node whose size is to be found
* Return: size of the node
*/

unsigned int nodeSize(listint_t *node)
{
	unsigned int size = 0;

	while (node != NULL)
	{
		node = node->next;
	size++;
	}
	return (size);
}


/**
* insert_nodeint_at_index - a function that inserts
* a new node at a given position
* @head: double pointer to the head of the node
* @idx: the index of the list where the new node should be added
* @n: value to be inserted
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	


	unsigned int count = 0;

	listint_t *temp, *newNode;

	if (idx > nodeSize(*head) || head == NULL || *head == NULL)
		return (NULL);

	temp = *head;
	if (idx == 0)
	{
		listint_t *newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (temp != NULL)
	{
		count++;
		if (count == idx)
		{
			newNode = (listint_t *) malloc(sizeof(listint_t));

			if (newNode == NULL)
				return (NULL);
			newNode->n = n;
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;

	}












}
