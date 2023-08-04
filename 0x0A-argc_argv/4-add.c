#include<stdio.h>

/**
 * main -  program that adds positive numbers
 * @argc: size of array
 * @argv: array of arguments
 *
 * Return: zero if success
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i;
	int y = 0;

	if (argc > 0)
	{
		for (i = 0; i <= argc - 1; i++)
		{
			result = result + atoi(argv[i]);
			printf("%d\n", result);
		}
		if (*argv >= 'a' && *argv <= 'z')
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("%d\n", y);
	}

	return (0);
}
