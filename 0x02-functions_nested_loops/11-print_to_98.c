#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{

		int i;

		for (i = n; i < 98; i++)
		{
			_putchar((i / 100) + '0');
			_putchar((i / 10) % 10 + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		int i;

		for (i = n; i > 98; i--)
		{
			_putchar((i / 100) + '0');
			_putchar((i / 10) % 10 + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
