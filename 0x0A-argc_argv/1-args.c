#include<stdio>

/**
 * main - prints the number of arguments passed into it
 * @argc: size of array
 * @argv: array of arguments
 *
 * Return: always zero if success
 */

int main(int argc, char *argv[] __attribute__(unused))
{
	printf("%d\n", argc - 1);

	return (0);
}
