#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing the bytes to match.
 *
 * Return: Number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0;

	while (*s && strchr(accept, *s))
	{
		t++;
		s++
	}

	return (t);
}
