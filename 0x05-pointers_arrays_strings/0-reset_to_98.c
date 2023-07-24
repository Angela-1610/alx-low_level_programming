#include<stdio.h>
#include"main.h"

/**
 * reset_to_98 - function that takes a pointer and
 *               updates the value it points to to 98
 *
 * @n: the value to point to
 *
 * Return: Always 0 (Success)
*/

void reset_to_98(int *n)
{
	int n = 100;
	int *ptr = &n;

	n = 98;

	return (0);
}
