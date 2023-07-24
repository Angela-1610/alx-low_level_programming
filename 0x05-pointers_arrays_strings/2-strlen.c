#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: the character
 *
 * Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
