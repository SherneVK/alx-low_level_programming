#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @number: The input number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int number)
{
	number = (number >= 0) ? number : -number;

	int last_digit = number % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
