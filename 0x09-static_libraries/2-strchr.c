#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: Pointer to the string.
 * @c: Character to be located.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int e = 0;

	for (; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
			return (&s[e]);
	}
	return (0);
}
