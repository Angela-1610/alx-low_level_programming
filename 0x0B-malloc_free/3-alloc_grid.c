#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  function return pointer to 2 dimensional array of int
 * @width: the first dimension
 * @height: the sec dimension
 *
 * Return: pointer or null if fail
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(**ptr));

		if (ptr[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
