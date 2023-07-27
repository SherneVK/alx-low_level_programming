#include "main.h"

/**
 * is_separator - Check if a character is a separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    for (int i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
            return 1;
    }
    return 0;
}

/**
 * to_upper - Convert a lowercase character to uppercase.
 * @c: The character to convert.
 *
 * Return: The uppercase version of the character.
 */
char to_upper(char c)
{
    return c >= 'a' && c <= 'z' ? c - ('a' - 'A') : c;
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
    int index = 0;
    int capitalize_next = 1;

    while (str[index])
    {
        if (is_separator(str[index]))
        {
            capitalize_next = 1;
        }
        else if (capitalize_next && str[index] >= 'a' && str[index] <= 'z')
        {
            str[index] = to_upper(str[index]);
            capitalize_next = 0;
        }
        else
        {
            capitalize_next = 0;
        }

        index++;
    }

    return str;
}

