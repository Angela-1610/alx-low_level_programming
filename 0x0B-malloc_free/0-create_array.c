#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * create_array - create array of chars and initialize with specific char
 * @size: size of array
 * @c: the specific char
 *
 * Return: pointer to array or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == null)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
