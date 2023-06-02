#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - a function that adds a new node at the beginning of a list_t list
* @str: str to be duplicated
* @head: a double pointer to the list list_t
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *node;

	for (; str[len] != '\0'; len++)
		;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = *head;
	*head = node;
	return (*head);
}
