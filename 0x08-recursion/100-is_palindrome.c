#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - Recursive helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
        return 1; // Base case: All characters checked, it's a palindrome

    if (s[start] != s[end])
        return 0; // Characters don't match, not a palindrome

    return is_palindrome_recursive(s, start + 1, end - 1); // Recurse with updated indices
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = strlen(s);

    if (len <= 1)
        return 1; // Empty or single-character string is a palindrome

    return is_palindrome_recursive(s, 0, len - 1);
}

