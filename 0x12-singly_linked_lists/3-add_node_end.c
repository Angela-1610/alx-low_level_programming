#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function adds new node at the end of list
 * @head: double pointer points to list's head
 * @str: string act as data to new node
 *
 * Return: address of new element or null if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *node;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if ((*head) == NULL)
	{
		new = (*head);
		return (new);
	}
	node = (*head);
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = new;

	return (new);
}
