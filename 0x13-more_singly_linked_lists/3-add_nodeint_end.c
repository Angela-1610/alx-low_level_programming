#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function adds new node at the end of list
 * @head: double pointer to list
 * @n: data of type int
 *
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}
	tmp = (*head);
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;

	return (new);
}
