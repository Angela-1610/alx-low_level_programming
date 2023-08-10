#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: size of type int
 *
 * Return: pointer or null if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, size;
	int x;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	size = i + j;
	ptr = malloc((size + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < (size + n); x++)
	{
		if (x < i)
		{
			ptr[x] = s1[x];
		}
		else
		{
			ptr[x] = s2[x - i];
		}
	}
	ptr[x] = '\0';

	return (ptr);
}
