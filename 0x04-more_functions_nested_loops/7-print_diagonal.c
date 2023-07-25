#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
	int e, l;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (e = 0; e < n; e++)
	{
		for (l = 0; l < e; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
