#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of times to print diagonal lines
 * Return: empty
 */
void print_diagonal(int n)
{
	int r, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r < n; r++)
		{
			for (s = 0; s < r; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
