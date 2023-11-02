#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: var of type int
 *
 * Return: new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	unsigned long int i;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
	{
		return (NULL);
	}
	t->size = size;
	t->array = malloc(sizeof(hash_node_t *) * size);
	if (t->array == NULL)
	{
		free(t);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		t->array[i] = NULL;
	}

	return (t);
}
