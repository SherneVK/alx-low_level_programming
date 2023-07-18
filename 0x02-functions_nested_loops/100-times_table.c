#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times table to print.
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	int i, j, pro;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			pro = i * j;

			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (pro < 10)
					_putchar(' ');
				else if (pro < 100)
					_putchar(' ');

				if (pro >= 100)
					_putchar((pro / 100) + '0');

				if (pro >= 10)
					_putchar(((pro % 100) / 10) + '0');

				_putchar((pro % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
