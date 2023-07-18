#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 * Description: This function prints the lowercase alphabet ten times, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char abc = 'a';
	int i = 0;

	while (i < 260)
	{
		_putchar(abc);
		abc++;

		if (abc > 'z')
			abc = 'a';

		i++;
	}

	_putchar('\n');
}
