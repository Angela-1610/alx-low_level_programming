#include<stdio.h>
#include"main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 without 2 and 4
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	for (int i = 0; i < 9; i++)
	{
		_putchar(i);

		if (i == 2 || i == 4)
		{
			continue;
		}
	}
	_putchar('\n');
}
