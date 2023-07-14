#include <stdio.h>

/**
 * main - Prints the alphabet without q and e
 * Return: return 0 and exit the program
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}
		else
		{
			putchar(x);
		}
	}
	putchar('\n');

	return (0);
}
