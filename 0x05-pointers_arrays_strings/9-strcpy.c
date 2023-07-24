#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed
 * @src: the string
 * @dest: the copy of the srting
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
