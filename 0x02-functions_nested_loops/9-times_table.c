#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int e, l;

	for (e = 0; e <= 9; e++)
	{
        _putchar('0');

	for (l = 1; l <= 9; l++)
	{
		int pro = e * l;

		_putchar(',');
		_putchar(' ');

		if (pro < 10)
			_putchar(' ');
		else
			_putchar(pro / 10 + '0');

		_putchar(pro % 10 + '0');
	}
	_putchar('\n');
	}
}
