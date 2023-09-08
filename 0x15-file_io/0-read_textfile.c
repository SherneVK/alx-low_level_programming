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
	FILE *f;
	char *bff;
	size_t read_count, write_count;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "r");
	if (f == NULL)
		return (0);

	bff = malloc(sizeof(char) * letters);
	if (bff == NULL)
	{
		fclose(f);
		return (0);
	}

	read_count = fread(bff, sizeof(char), letters, f);
	if (read_count == 0)
	{
		fclose(f);
		free(bff);
		return (0);
	}

	write_count = fwrite(bff, sizeof(char), read_count, stdout);
	if (write_count != read_count)
	{
		fclose(f);
		free(bff);
		return (0);
	}

	fclose(f);
	free(bff);
	return (read_count);
}
