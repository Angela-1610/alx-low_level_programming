#include<stdio.h>
#include"main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, j, res;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			res = j;
			if (j > 9)
			{
				 _putchar(1 + '0');
				 res = j % 10;
			}
			_putchar(res + '0');
		}
		_putchar('\n');
	}
}
