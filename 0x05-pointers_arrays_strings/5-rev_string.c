#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: the string
 *
 * Return: Always 0 (Success)
*/

void rev_string(char *s)
{
	int l, i;

	char tmp;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
