#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
	char numbers[] = "0123456789\n";
	int e;

	for (e = 0; numbers[e] != '\0'; e++)
	{
		_putchar(numbers[e]);
	}
}
