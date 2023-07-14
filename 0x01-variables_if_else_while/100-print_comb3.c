#include <stdio.h>
/**
 * main -  print differente combination of two digit-numbers
 * Return: return 0 and exit program
*/

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x > y || x == y)
			{
				continue;
			}
			if (x != 8 && y != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	}
	return (0);
}
