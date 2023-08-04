#include<stdio.h>

/**
 * main - print the name of program
 * @argc: size of array
 * @argv: array of arguments
 *
 * Return: always zero
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}

