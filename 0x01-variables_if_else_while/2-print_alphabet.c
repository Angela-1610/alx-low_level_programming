#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: return 0 and exit the program
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
