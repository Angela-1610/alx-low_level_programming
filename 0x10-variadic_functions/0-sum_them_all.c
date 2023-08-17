#include"variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function return sum of all its parameters
 * @n: the value of function
 * Return: sum or zero if fail
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int sum, i;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
}
