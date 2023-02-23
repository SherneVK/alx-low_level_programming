#include "main.h"
/**
 * print_numbers - Print the numbers from 0 up to 9
 * Return: The numbers from 0 up to 9
 */
void print_numbers(void)

{
	int r;

	for (r = 0; r <= 9; r++)
	{
	_putchar(r + '0');
	}
	_putchar('\n');
}
