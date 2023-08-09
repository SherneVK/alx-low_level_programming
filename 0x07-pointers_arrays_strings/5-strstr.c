#include "main.h"

/**
 * _strstr - Find the first occurrence of a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, const char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *b = needle;

		while (*j == *b && *b != '\0')
		{
			j++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}
