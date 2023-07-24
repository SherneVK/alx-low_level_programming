#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @str: The string to be converted
 *
 * Return: The integer converted from the string
 */

int _atoi(char *str)
{
	int i = 0;
	int minus_count = 0;
	int result = 0;
	int len = 0;
	int found_digit = 0;
	int current_digit = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (i < len && !found_digit)
	{
		if (str[i] == '-')
		{
			minus_count++;
		}

		if (str[i] >= '0' && str[i] <= '9')
		{
			current_digit = str[i] - '0';

			if (minus_count % 2)
			{
				current_digit = -current_digit;
			}

			result = result * 10 + current_digit;
			found_digit = 1;

			if (str[i + 1] < '0' || str[i + 1] > '9')
			{
				break;
			}

			found_digit = 0;
		}

		i++;
	}

	if (!found_digit)
	{
		return (0);
	}

	return (result);
}
