#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 excluding 2 and 4
 */
void print_most_numbers(void)
{
	char valid_numbers[] = "01356789\n";
	int e;

	for (e = 0; valid_numbers[e] != '\0'; e++)
	{
		_putchar(valid_numbers[e]);
	}
}
