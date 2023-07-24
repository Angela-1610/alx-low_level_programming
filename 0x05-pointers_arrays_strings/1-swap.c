#include<stdio.h>
#include"main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: the first integer
 * @b: the seconf integer
 *
 * Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
