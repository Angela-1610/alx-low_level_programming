#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: type string
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	int x = 0;

	if (s[x] == '\0')
	{
		_putchar('\n');
		return;
	}

	 _putchar(s[x] + _print_rev_recursion(s[x] - 1));

	s++;

}
