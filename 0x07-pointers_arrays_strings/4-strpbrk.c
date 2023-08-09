#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes
 * @s: The string to be searched
 * @accept: The characters to search for
 *
 * Return: A pointer to the byte in `s` that matches one of the bytes in
 * `accept`, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, const char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}

	return (NULL);
}
