#include<stdio.h>
#include"main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
