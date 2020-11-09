#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX output.
 * @filename: the name of the file.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, k, n;
	char *buffer;

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY, 600);

	if (fd == -1)
	{
		return (0);
	}

	n = read(fd, buffer, letters);
	if (n == -1)
	{
		free(buffer);
		return (0);
	}

	buffer[letters] = '\0';

	k = write(1, buffer, n);
	if (k == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	return (k);
}
