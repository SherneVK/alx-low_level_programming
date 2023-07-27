#include "main.h"

#include <stdbool.h> // Required for using bool data type

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if the character is a separator, otherwise false.
 */
bool is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    for (int i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
            return true;
    }
    return false;
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    bool capitalize_next = true; // Start with the first character capitalized
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (is_separator(*ptr))
            capitalize_next = true; // Capitalize the next character after a separator
        else if (*ptr >= 'a' && *ptr <= 'z' && capitalize_next)
        {
            *ptr -= ('a' - 'A'); // Convert lowercase to uppercase
            capitalize_next = false; // Word already capitalized
        }
        else
            capitalize_next = false; // Word already capitalized or not a lowercase character

        ptr++;
    }

    return str;
}

