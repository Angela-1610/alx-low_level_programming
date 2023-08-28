#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function returns number of elements in linked list
 * @h: pointer to a list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
