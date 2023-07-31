#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the main string
 * @accept: the inner string
 *
 * Return: pointer if found or null if not
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				x = &s[i];
				return (x);
			}
		}
	}

	return (0);
}
