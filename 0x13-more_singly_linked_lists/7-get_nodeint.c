#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of list
 * @head: pointer to list
 * @index: the index of the node
 *
 * Return: data in this index or null if fail
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;

	if (node == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}

	return (node);
}
