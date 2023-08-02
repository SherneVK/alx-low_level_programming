#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose length is to be determined.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	int restLength = _strlen_recursion(s + 1);

	return (restLength + 1);
}
