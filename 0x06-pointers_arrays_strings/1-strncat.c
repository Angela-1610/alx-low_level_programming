#include"main.h"
#include<stdio.h>

/**
 * *_strncat -  function that concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: bytes number
 *
 * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x])
	{
		x++;
	}
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}

	dest[x + i] = '\0';

	return (dest);
}
