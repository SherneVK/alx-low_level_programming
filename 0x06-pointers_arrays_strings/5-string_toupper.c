#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	for (int e  = 0; str[e] != '\0'; e++)
	{
		if ('a' <= str[e] && str[e] <= 'z')
			str[e] -= 32;
	}

	return (str);
}
