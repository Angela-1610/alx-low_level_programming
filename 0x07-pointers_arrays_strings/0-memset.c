#include"main.h"
#include<stdio.h>

/**
 * *_memset -  function that fills memory with a constant byte
 * @s: the main string
 * @b: the string to replace
 * @n: constant byte number
 *
 * Return: pointer of new string
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = b;
	}

	return (ptr);
}
