#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *wtr = str;

	while (*wtr != '\0')
	{
		if (*wtr >= 'a' && *wtr <= 'z')
			*wtr -= ('a' - 'A');
		wtr++;
	}

	return (str);
}
