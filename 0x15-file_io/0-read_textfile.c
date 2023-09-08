#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: name of the file to read.
 * @letters: number of letters to read and print.
 *
 * Return: actual number of letters read and printed, 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *bff;
	ssize_t read_count, write_count;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bff = malloc(sizeof(char) * letters);
	if (bff == NULL)
	{
		close(fd);
		return (0);
	}

	read_count = read(fd, bff, letters);
	if (read_count == -1)
	{
		close(fd);
		free(bff);
		return (0);
	}

	write_count = write(STDOUT_FILENO, bff, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		close(fd);
		free(bff);
		return (0);
	}

	close(fd);
	free(bff);
	return (read_count);
}
