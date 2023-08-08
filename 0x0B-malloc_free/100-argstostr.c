#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function concatenates all arguments of program
 * @ac: variable of type int
 * @av: array of char
 *
 * Return: pointer or null if fail
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i = 0;
	int arg, subarg;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (subarg = 0; av[arg][subarg]; subarg++)
			size++;
	}

	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)

	{
		for (subarg = 0; av[arg][subarg]; subarg++)

		{
			ptr[i++] = av[arg][subarg];
		}

		ptr[i++] = '\n';
	}

	ptr[size] = '\0';

	return (ptr);
}
