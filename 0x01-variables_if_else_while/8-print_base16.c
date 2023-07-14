#include <stdio.h>
/**
 * main - print number of base16 in lowercase
 * Return: return 0 and exit the program
*/

int main(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
