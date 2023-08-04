#include "main.h"
#include <stdio.h>

/**
 * _puts -  function that prints a string, followed by a new line
 * @str: the string
 *
 * Return: Always 0 (Success)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
