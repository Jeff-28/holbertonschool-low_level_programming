#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file.
 * @text_content: is a NULL.
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, k, len = 0;

	if (filename == NULL || *filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	while (text_content[len] != '\0')
	{
		len++;
	}

	k = write(fd, text_content, len);
	if (k == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
