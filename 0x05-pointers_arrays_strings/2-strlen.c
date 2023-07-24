#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string (excluding the null-terminator)
 */
int _strlen(char *s)
{
	char *tr = s;

	while (*tr != '\0')
	{
		tr++;
	}

	return tr - s;
}
