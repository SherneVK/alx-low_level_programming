#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
    int e, l;

    if (size <= 0)
    {
	    _putchar('\n');
	    return;
    }

    for (e = 1; e <= size; e++)
    {
	    for (l = 1; l <= size - e; l++)
		    _putchar(' ');

	    for (l = 1; l <= e; l++)
		    _putchar('#');

	    _putchar('\n');
    }
}
