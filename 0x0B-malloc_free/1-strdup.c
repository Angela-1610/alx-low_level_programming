#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function return pointer to newly allocated space in memory
 * @str: string given as a parameter
 *
 * Return: pointer or null if fail
 */

char *_strdup(char *str)
{
	char *z;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;

	z = (char *) malloc(i * sizeof(*z) + 1);  /* +1 as the end of string '\0' */

	if (z == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		z[j] = str[j];
	}

	return (z);
}
