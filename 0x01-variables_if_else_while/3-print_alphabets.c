#include <stdio.h>

/**
 * main - display the alphabet in lowercase, and then in uppercase
 * Return: return 0 and exit the program
 */
int main(void)
{
	char x, y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
