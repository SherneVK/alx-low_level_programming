#include "main.h"

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
