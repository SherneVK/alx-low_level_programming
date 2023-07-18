#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 * Description: This function prints the lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
	char abc = 'a';
	int e, l;

	for (l = 0; l < 10; l++)
	{
		for (e = 0; e < 26; e++)
		{
			_putchar(abc);
			abc++;
		}
	}

	_putchar('\n');
}
