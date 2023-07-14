#include <stdio.h>
/**
 * main - print number of base16 in lowercase
 * Return: return 0 and exit the program
*/

int main(void)
{
	int i;
	char x[16] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');

	return (0);
}
