#include "main.h"
/**
 * print_alphabet_x10 - print the alphabe 10 times.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	int o;

	for (o = 1; x <= 10; x++)
	{
		for (o = 97; o <= 122; o++)
		{
			_putchar(o);
		}
		_putchar('\n');
	}
}
