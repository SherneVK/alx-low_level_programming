#include "main.h"

/**
 * _strncpy - Copies at most n characters from src to dest.
 * @dest: The destination buffer where the content will be copied.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tr = dest;
	int e;

	for (e = 0; e < n && src[e] != '\0'; e++)
	{
		*tr++ = src[e];
	}

	for (; e < n; e++)
	{
		*tr++ = '\0';
	}

	return (dest);
}
