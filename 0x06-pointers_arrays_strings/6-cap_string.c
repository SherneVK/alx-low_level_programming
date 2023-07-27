#include "main.h"
#include <stdbool.h>
#include <ctype.h>

/**
 * is_separator - Check if a character is a separator.
 * @c: The character to check.
 *
 * Return: true if the character is a separator, false otherwise.
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
 * cap_string - Capitalize the first letter of each word in a string.
 * @str: The input string to capitalize.
 *
 * Return: Pointer to the modified input string `str`.
 */
char *cap_string(char *str)
{
    bool capitalize_next = true;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (is_separator(str[i]))
        {
            capitalize_next = true;
        }
        else if (capitalize_next && isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
            capitalize_next = false;
        }
        else
        {
            str[i] = tolower(str[i]);
        }
    }

    return str;
}
