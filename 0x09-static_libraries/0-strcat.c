#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which @src will be appended.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *tr = dest;

	while (*tr)
		tr++;

	while ((*tr++ = *src++))
		;

	return (dest);
}
