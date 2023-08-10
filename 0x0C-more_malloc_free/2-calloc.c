#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function allocates memory for array using malloc
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer or null if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if (nmemb == NULL || size == NULL)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		*ptr[i] = 0;
	}

	return (ptr);
}
