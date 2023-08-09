#include "main.h"

/**
 * _strstr - Find the first occurrence of a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *l, *p;

    for (l = haystack; *l != '\0'; l++)
    {
        p = needle;

        while (*l == *p && *p != '\0')
        {
            l++;
            p++;
        }

        if (*p == '\0')
            return haystack;
    }

    return NULL;
}
