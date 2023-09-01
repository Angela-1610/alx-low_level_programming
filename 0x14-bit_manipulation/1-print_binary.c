#include <stdio.h>
#include "main.h"

/**
 * print_binary -  function prints the binary representation of number
 * @n: decimal number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");

		else
			printf("0");
	}
}
