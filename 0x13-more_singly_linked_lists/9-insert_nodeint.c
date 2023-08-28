#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - func inserts new node at given position
 * @head: double pointer to head's list
 * @idx: given position to add in
 * @n: data of new node
 *
 * Return: address of new node or null if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	int i;

	new = malloc(sizeof(listint_t *));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	else
	{
		tmp = (*head);
		for (i = 0; i < idx; i++)
		{
			tmp = tmp->next;
		}
		new->next = tmp->next;
		tmp->next = new;
	}

	return (new);
}
