#include"main.h"

/**
 * create_file - function that creates a file
 * @filename: file name to creat it
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
	}

	op = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);
	wr = write(op, text_content, i);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
