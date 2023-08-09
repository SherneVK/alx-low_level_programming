#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int e;

	for (e = 0; e < argc; e++)
	{
		printf("%s\n", argv[e]);
	}

	return (0);
}
