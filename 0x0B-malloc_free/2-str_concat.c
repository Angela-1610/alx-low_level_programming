#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function concatenate two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer or null if fail
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int x, y, i;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;

	ptr = (char *) malloc((x + y) * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= x + y; i++)
	{
		if (i < x)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - x];
	}
	ptr[i] = '\0';

	return (ptr);
}
