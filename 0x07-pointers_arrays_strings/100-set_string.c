#include "main.h"
#include <stdio.h>

/**
 * set_string - function sets the value of pointer to char
 * @s: pointer point to pointer
 * @to: pointer point to value
 *
 * Return: nothing
*/

void set_string(char **s, char *to)
{
	*s = to;
}
