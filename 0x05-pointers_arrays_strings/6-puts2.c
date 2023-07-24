#include<stdio.h>
#include"main.h"

/**
 * puts2 - function that prints every other character of a string
 *         starting with the first character
 * @str: the string
 *
 * Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
