#include<stdio.h>
#include"main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @n: elements of an array of integers
 * @a: the pointer
 *
 * Return: Always 0 (Success)
*/

void print_array(int *a, int n)
{
	int b, num;

	num = n - 1;

	for (b = 0; b <= num; b++)
	{
		printf("%d", a[b]);

		if (b < num)
		{
			printf(", ");
		}
	}
	printf("\n");
}
