#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * is_space - Checks if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if character is whitespace, 0 otherwise.
 */
int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int i, word_count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (!is_space(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0'))
            word_count++;
    }

    return word_count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int i, j, k, word_count;
    char **words;

    word_count = count_words(str);
    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    for (i = 0, j = 0; i < word_count; i++)
    {
        while (is_space(str[j]))
            j++;

        k = j;
        while (!is_space(str[k]) && str[k] != '\0')
            k++;

        words[i] = _strdup(str + j);
        if (words[i] == NULL)
        {
            for (i = 0; i < word_count; i++)
                free(words[i]);
            free(words);
            return NULL;
        }

        j = k;
    }

    words[i] = NULL;
    return words;
}

