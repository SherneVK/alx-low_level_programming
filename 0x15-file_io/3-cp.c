#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Display an error message and exit with a specified code.
 * @code: The exit code.
 * @message: The error message to display.
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to;
	ssize_t bytes_read;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		error_exit(98, "Can't read from source file");

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		error_exit(99, "Can't write to destination file");

	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		ssize_t bytes_written = write(to, buffer, bytes_read);

		if (bytes_written == -1)
			error_exit(99, "Can't write to destination file");
	}

	if (bytes_read == -1)
		error_exit(98, "Can't read from source file");

	close(from);
	close(to);

	return (0);
}
