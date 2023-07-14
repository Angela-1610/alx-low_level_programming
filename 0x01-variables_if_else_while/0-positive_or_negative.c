#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - display if the number is positive |  negative | zero
 * Return: return 0 and exit the program
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("is zero %d\n", n);
	}
	else
	{
		printf("is negative %d\n", n);
	}
	return (0);
}
