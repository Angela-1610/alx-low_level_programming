#include "main.h"
#include <stdio.h>

/**
 * *leet - function that encodes a string into
 * @s: the string
 *
 * Return: the new string
*/

char *leet(char *s)
{
	char*ptr = s;
	char x[] = {'a', 'e', 'o', 't', 'l'};
	int var[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(x) / sizeof(char); i++)
		{
			if (*s == x[i] || *s == x[i] + 32)
			{
				*c = var[i] + 48;
			}
		}
		s++;
	}
	return (ptr);
}
