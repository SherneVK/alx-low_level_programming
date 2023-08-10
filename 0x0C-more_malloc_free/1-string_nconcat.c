#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char *concatenated;
    unsigned int len1 = 0, len2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    concatenated = malloc(sizeof(char) * (len1 + n + 1));

    if (concatenated == NULL)
        return (NULL);

    strncpy(concatenated, s1, len1);
    strncat(concatenated + len1, s2, n);
    concatenated[len1 + n] = '\0';

    return (concatenated);
}
