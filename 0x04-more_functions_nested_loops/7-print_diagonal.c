#include<stdio.h>
#include"main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times the character should be printed
 *
 * Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
	int i, j;

	while (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
