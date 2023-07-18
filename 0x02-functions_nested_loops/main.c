#include <stdio.h>
#include "main.h"

int main(void)
{
	int number1 = 66;
	int number2 = 22;
	int number3 = 88;

	_putchar(print_last_digit(number1) + '0'); // Output: 4
	_putchar('\n');

	_putchar(print_last_digit(number2) + '0'); // Output: 2
	_putchar('\n');

	_putchar(print_last_digit(number3) + '0'); // Output: 8
	_putchar('\n');

	return (0);
}
