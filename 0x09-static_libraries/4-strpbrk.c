#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes
 * @s: The string to be searched
 * @accept: The characters to search for
 *
 * Return: A pointer to the byte in `s` that matches one of the bytes in
 * `accept`, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
				return (s);
		}
		s++;
	}

	return ('\0');
}
