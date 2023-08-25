#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function adds new node at the beginning of a list
 * @head: double pointer points to list's head
 * @str: string as data to new node
 *
 * Return: address of new element or null if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	while (str[i] != '\0')
                i++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
