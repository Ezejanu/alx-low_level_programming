#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


Node Stucture
typedef struct node_t {
    int data;
    struct node_t *next;
} Node;


Print all the elements in the linked list
void print(Node *head) {
    Node *current_node = head;
   	while ( current_node != NULL) {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
}
*/

/**
* print_list - a function that prints all the elements of a list_t list
* @h: pointer to the first node
* Return: number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;


	while (h)
	if (!h->str)
	printf("[0] (nil)\n");
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u], %s\n", (h->len), h->str);
		h = h->next;
		count++;
	}

	return (count);
}
