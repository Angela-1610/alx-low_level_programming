#include"main.h"
#include<stdio.h>

/**
 * *_strcat -  function that concatenates two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x])
	{
		x++;
	}
	for (y = 0; src[y]; y++)
	{
		dest[x] = src[y];
		x++;
	}

	return (dest);
}
