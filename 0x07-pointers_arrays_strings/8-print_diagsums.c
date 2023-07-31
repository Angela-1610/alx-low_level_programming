#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of square matrix
 * @a: the array
 * @size: size of array
 *
 * Return: nothing
 *
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size - i - 1];
		a = a + size;
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
