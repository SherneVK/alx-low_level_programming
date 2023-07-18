#include "main.h"
#include <limits.h>
#include <unistd.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @number: The input number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int number)
{
	/* Take the absolute value to handle negative numbers */
	long int num = (number >= 0) ? number : -((long int)number);

	int last_digit = num % 10;

	_putchar(last_digit + '0');

	return (last_digit);
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int last_digit = print_last_digit(INT_MIN);

	_putchar('\n');

	return (0);

}
