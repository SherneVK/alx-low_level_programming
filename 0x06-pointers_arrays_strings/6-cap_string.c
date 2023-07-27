#include "main.h"
#include <stdbool.h>
#include <string.h>

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
 * cap_string - Capitalize the first character of each word in a string.
 * @str: The input string to capitalize.
 *
 * Return: Pointer to the modified input string `str`.
 */
char *cap_string(char *str)
{
    bool capitalize_next = true;
    char *word = strtok(str, " \t\n,;.!?\"(){}");

    while (word)
    {
        if (capitalize_next)
            *word = toupper(*word);
        capitalize_next = false;
        word = strtok(NULL, " \t\n,;.!?\"(){}");
    }

    return str;
}

