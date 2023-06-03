#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end -  a function that adds a new node at the end of a list_t list
* @str: the str to be duplicated at the end of the list
* @head: a double pointer to the list list_t
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp = *head;
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
		node->next = NULL;
		node->len = len;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		while ((temp != NULL) && (temp->next != NULL))
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	return (node);
}
