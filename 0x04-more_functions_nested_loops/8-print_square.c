#include "main.h"

/**
 * print_square - Prints a square followed by a new line.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int e, l;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (e = 0; e < size; e++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
