#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int e, l;

	for (e = 0; e < 10; e++)
	{
		for (l = 0; l <= 14; l++)
		{
			_putchar((l > 9) ? (l / 10) + '0' : l + '0');
			_putchar((l > 9) ? (l % 10) + '0' : '\0');
		}

		_putchar('\n');
	}
}
