#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count - function compute string length
 * @str: the string
 *
 * Return: number of length
 */

int count(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = len + 1;
	}

	return (len);
}

/**
 * strtow - function that splits a string into words
 * @str: the string to split
 *
 * Return: pointer of words or null if fail
 */

char **strtow(char *str)
{
	int index = 0;
	int size = count(str);
	int index2 = 0;
	char **arr;

	arr = (char **) malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	while (str[index])
	{
		if (str[index] == ' ')
		{
			index++;
			value++;
			index2++;
		}
		else
		{
			*(arr + index2) = (char *) malloc(index * sizeof(char));
			*(arr + index2) = &str[index];
		}
		index++;
	}
	**arr = '\0';

	return (arr);
}
