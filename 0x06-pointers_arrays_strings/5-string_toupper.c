#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - function change lowercase letters of string to uppercase
 * @str: the character
 *
 * Return: the new string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 'a' && str[i] < 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
