#include<stdio.h>
#include"main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf(n);
		printf(",");
		printf(" ");

		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("\n");
}
