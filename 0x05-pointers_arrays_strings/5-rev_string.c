#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * rev_string - Reverses a string in-place
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s + _strlen(s) - 1;
	char emp;

	while (start < end)
	{
		emp = *start;
		*start = *end;
		*end = emp;

		start++;
		end--;
	}
}
