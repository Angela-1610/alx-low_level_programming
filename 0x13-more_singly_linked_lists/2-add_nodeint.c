#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function adds new node at beginning of list
 * @head: double pointer to head
 * @n: data of type int
 *
 * Return: address of new element or null if fail
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
