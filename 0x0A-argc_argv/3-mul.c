#include<stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: size of array
 * @argv: array of arguments
 *
 * Return: always zero if success
 */

int main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
