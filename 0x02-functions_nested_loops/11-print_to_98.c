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
		_putchar(n);
		_putchar(',');
		_putchar(' ');

		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	_putchar('\n');
}
