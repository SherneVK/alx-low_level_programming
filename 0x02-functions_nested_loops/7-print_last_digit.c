#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @number: The input number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int number)
{
	/* Take the absolute value to handle negative numbers */
	int num = (number >= 0) ? number : -number;

	int last_digit = num % 10;

	_putchar(last_digit + '0'); /* Convert the digit to a character and use _putchar to print it */

	return (last_digit);
}
