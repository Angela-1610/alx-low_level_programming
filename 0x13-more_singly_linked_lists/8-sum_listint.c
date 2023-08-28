#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function return sum of all the data in list
 * @head: ointer to list
 *
 * Return: sum or 0 if fail
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;
	while (node != NULL)
	{
		sum = sum + (node->n);
		node = node->next;
	}

	return (sum);
}
