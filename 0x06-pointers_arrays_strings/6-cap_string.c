#include "main.h"
#include <stdio.h>

/**
 * islower - check if the character in lowercase or not
 * @s: the character
 *
 * Return: 1 if true , others 0
*/

int islower(char s)
{
	if (s > 'a' && s < 'z')
		return (1);
	else
		return (0);
}

/**
 * otherchar - check type of character
 * @s: the character
 *
 * Return: true or false
*/

int otherchar(char s)
{
	char arr[12] = " \t\n,;.!?\"(){} ";
	int i;

	for (i = 0; i < 12; i++)
	{
		if (s == arr[i])
		{
			return (1);
		}
		else
			return (0);
	}
}

/**
 * *cap_string - function that capitalizes all words of a string
 * @s: the character
 *
 * Return: the new string
*/

char *cap_string(char *s)
{
	while (*s)
	{
		if (islower(*s) && otherchar(*s))
		{
			*s -= 32;
		}
		s++;
	}

	return (s);
}
