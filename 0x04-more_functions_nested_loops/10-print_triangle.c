#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int e, l;

		for (e = 1; e <= size; e++)
		{
			for (l = e; l < size; l++)
			{
				_putchar(' ');
			}

			for (l = 1; l <= e; l++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
