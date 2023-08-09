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
    char *haystack_ptr = haystack;
    const char *needle_ptr = needle;

    while (*haystack_ptr != '\0')
    {
        while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0')
        {
            haystack_ptr++;
            needle_ptr++;
        }

        if (*needle_ptr == '\0')
            return haystack;

        haystack++;
        haystack_ptr = haystack;
        needle_ptr = needle;
    }

    return NULL;
}
