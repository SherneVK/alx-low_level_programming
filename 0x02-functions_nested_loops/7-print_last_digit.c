#include "main.h"
#include <limits.h> /* Add this line to include <limits.h> for INT_MIN */
#include <unistd.h> /* Add this line to include <unistd.h> for write */

/**
 * _putchar - Dummy implementation to satisfy compilation requirements.
 * @c: The character to print.
 *
 * Return: On success, return the character.
 * On error, return -1 and errno is set appropriately.
 */
int _putchar(char c)
{
    /* Your actual implementation of _putchar would go here */
    return write(1, &c, 1);
}

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
    _putchar(last_digit + '0'); /* Convert the digit to a character and use _putchar to print it */

    return last_digit;
}
