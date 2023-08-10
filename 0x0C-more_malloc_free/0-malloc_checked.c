#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of type int
 *
 * Return: pointer or null if fail
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
