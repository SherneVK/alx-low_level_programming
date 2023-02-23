#include "main.h"
/**
 * print_square - Prints a square
 * @size: The number of squares, number of times
 * Return: empty
 */
void print_square(int size)
{
	int r, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r < size; r++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
