#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: type char pointer
 * @c: type char memory area
 *
 * Return: a pointer if occur or null if not
*/

char *_strchr(char *s, char c)
{
	bool check = true;

	while (*s != '\0')
	{
		if (*s == c)
			check = true;
		else
			check = false;
		s++;
	}

	if (check == true)
		return (s);
	else
		return (NULL);
}
