#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    int i, j;

    for (i = 1; i <= size; i++)
    {
        int num_spaces = size - i;
        int num_hashes = i;

        // Print spaces
        for (j = 1; j <= num_spaces; j++)
            _putchar(' ');

        // Print hashes
        for (j = 1; j <= num_hashes; j++)
            _putchar('#');

        _putchar('\n');
    }
}

