#include <stdio.h>
/**
 * main - print number of base16 in lowercase
 * Return: return 0 and exit the program
*/

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
