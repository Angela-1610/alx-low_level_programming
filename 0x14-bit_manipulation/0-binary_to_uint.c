#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * binary_to_uint - function converts binary number to int
 * @b: string of zeros and ones
 *
 * Return: number change from binary
 *         or null if fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0;
	int power;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			power = pow(2, i);
			sum = sum + power;
		}
	}

	return (sum);
}
