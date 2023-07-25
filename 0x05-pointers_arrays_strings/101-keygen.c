#include<stdio.h>
#include"main.h"

/**
 * main - program that generates random valid passwords
 *
 * Return: always zero (succss)
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum = sum + c;
		putchar(c);
	}
	putchar(2772 - sum);

	return (0);
}
