#include<stdio.h>
#include"main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			_putchar(r + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
