#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: double pointer to list
 *
 * Return: data of head or 0 if fail
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int x;

	if ((*head) == NULL)
		return (0);

	node = (*head);
	(*head) = node->next;
	x = node->n;
	free(node);

	return (x);
}
