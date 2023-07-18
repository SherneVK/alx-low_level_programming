#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 * Description: This function prints the lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
	char abc;

	for (int j = 0; j < 10; j++)
	{
		abc = 'a';
		for (int i = 0; i < 26; i++)
		{
			_putchar(abc);
			abc++;
		}
		_putchar('\n');
	}
}
