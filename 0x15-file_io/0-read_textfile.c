#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function reads text file and prints it
 * @filename: pointer of file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *arr;

	if (filename == NULL)
		return (0);

	arr = malloc(sizeof(char) * letters);

	if (arr == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, arr, letters);
	wr = write(STDOUT_FILENO, arr, rd);

	if (op == -1 || rd == -1 || wr == -1)
		return (0);

	close(op);
	free(arr);

	return (wr);
}
