#include<stdio.h>
#include"main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: result of compare both
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s2)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2  - 48);
			break;
		}
	}

	return (i);
}
