#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: type string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s != '\0')
	{
		counter = counter + 1;
		_strlen_recursion(s);
	}
	else
		return (counter);
}
