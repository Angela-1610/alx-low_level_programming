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
	unsigned int i, j, size;
	unsigned int x, y;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	size = i + j;
	ptr = malloc(i + n + 1);
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
	{
		ptr[x] = s1[x];
	}
	for (y = 0; y < n; y++)
	{
		ptr[x] = s2[y];
		x++;
	}

	ptr[x] = '\0';

	return (ptr);
}
