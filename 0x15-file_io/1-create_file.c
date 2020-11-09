#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file.
 * @text_content: is a NULL.
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, k;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	k = write(fd, text_content, sizeof(text_content));
	if (k == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
