#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This function prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
	char begin = 'a';
	char end = 'z';

	while (begin <= end)
	{
		_putchar(begin);
		begin++;
	}

	_putchar('\n');
}
