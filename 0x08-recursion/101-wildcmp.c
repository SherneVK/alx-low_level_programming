#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Compares two strings with wildcard support.
 * @s1: The first string.
 * @s2: The second string with wildcards.
 *
 * Return: 1 if strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '\0')
            return 1; // Wildcard matches the rest of s1

        if (*s1 == '\0')
            return wildcmp(s1, s2 + 1); // Continue checking after wildcard

        return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
    }
    else if (*s1 == *s2)
    {
        if (*s1 == '\0')
            return 1; // Both strings are empty and matched so far

        return wildcmp(s1 + 1, s2 + 1); // Continue comparing characters
    }

    return 0; // Characters don't match
}

