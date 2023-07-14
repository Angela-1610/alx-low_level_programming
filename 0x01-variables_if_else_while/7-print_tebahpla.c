#include <stdio.h>

/**
 * main - display alphabet reverse and lowercase
 * Return: return 0 and exit the program
*/

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
