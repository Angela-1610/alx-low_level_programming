#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function creates an array of integers
 * @min: minimum range of type int
 * @max: maximum range of type int
 *
 * Return: pointer or null if fail
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(max - min + 1 * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i < max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
