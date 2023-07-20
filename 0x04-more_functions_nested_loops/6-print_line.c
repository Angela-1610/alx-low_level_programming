#include<stdio.h>
#include"main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times the character should be printed
 *
 * Return: Always 0 (Success)
*/

void print_line(int n)
{
	int i;

	while (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		break;
	}

	_putchar('\n');
}
