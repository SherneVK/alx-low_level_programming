#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *aimed;
	unsigned int len1 = 0, len2 = 0, e, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	aimed = malloc(sizeof(char) * (len1 + n + 1));

	if (aimed == NULL)
		return (NULL);

	for (e = 0; e < len1; e++)
		aimed[i] = s1[i];

	for (l = 0; l < n; l++, e++)
		aimed[e] = s2[l];

	aimed[e] = '\0';

	return (aimed);
}
