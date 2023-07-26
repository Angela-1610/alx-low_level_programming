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

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - '0') - ((int)*s2 - '0');
			break;
		}
		s1++;
		s2++;
	}

	return (i);
}
