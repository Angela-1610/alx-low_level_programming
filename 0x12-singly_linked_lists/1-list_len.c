#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function returns number of elements in a linked list
 * @h: the head of list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}
