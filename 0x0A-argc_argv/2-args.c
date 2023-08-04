#include<stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: size of array
 * @argv: array of arguments
 *
 * Return: always zero
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
