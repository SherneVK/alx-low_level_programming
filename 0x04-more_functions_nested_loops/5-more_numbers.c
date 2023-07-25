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
			if (l > 9)
			{
				_putchar((l / 10) + '0');
			}
			_putchar((l % 10) + '0');
		}

		_putchar('\n');
	}
}
