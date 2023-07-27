#include "main.h"

/**
 * _strncat - Concatenate `n` characters from the `src` string to `dest`.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to concatenate from `src`.
 *
 * Return: Pointer to the destination string (`dest`).
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tr = dest;

	while (*tr)
		tr++;

	while (n > 0 && (*tr = *src))
	{
		tr++;
		src++;
		n--;
	}

	*tr = '\0';

	return (dest);
}
