#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *del, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = next;

		return (1);
	}
	del = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (del->next == NULL)
			return (-1);

		del = del->next;
	}
	tmp = del->next;
	del->next = tmp->next;
	free(tmp);

	return (1);
}
