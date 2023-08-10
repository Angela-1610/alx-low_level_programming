#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc != 3)
	{
		print("Error\n");
		exit(98);
	}
	if (isdigit(num1))
	{
		print("Error\n");
		exit(98);
	}
	if (isdigit(num2))
	{
		print("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	print("%d\n", mul);

	return (0);
}
