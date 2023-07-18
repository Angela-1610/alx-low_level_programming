#include<stdio.h>
#include"main.h"

/**
 * print_last_digit - Print last digit of a number
 *
 * @a: Type int a and @b type int b
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n >= 0)
	{
		x = n % 10;
		_putchar(x);
		return (x);
	}
	else
	{
		x = -1 * (n % 10);
		_putchar(x);
		return (x);
	}
}
