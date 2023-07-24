#include "main.h"
#include <limits.h>

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 * Return: 1 if the character is a digit, 0 otherwise.
 */
static int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * get_sign - Gets the sign of the number.
 * @str: The input string.
 * Return: The sign of the number (1 for positive, -1 for negative).
 */
static int get_sign(char *str)
{
	int sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	return sign;
}

/**
 * _atoi - Converts a string to an integer.
 * @str: The input string to be converted.
 * Return: The integer converted from the string.
 */
int _atoi(char *str)
{
	int result = 0;
	int sign = get_sign(str);

	while (*str)
	{
		if (is_digit(*str))
		{
			int digit = *str - '0';

			if (sign > 0 && (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)))
				return INT_MAX;

			if (sign < 0 && (result < INT_MIN / 10 || (result == INT_MIN / 10 && -digit < INT_MIN % 10)))
				return INT_MIN;

			result = result * 10 + sign * digit;
		}
		else
		{
			break;
		}

		str++;
	}

	return result;
}

