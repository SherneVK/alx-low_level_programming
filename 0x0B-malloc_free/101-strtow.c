#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0; // Flag to track whether inside a word

    for (; *str != '\0'; str++)
    {
        if (*str == ' ')
            in_word = 0; // Not in a word
        else if (!in_word)
        {
            in_word = 1; // Now in a word
            count++;
        }
    }

    return count;
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

    int num_words = count_words(str);
    if (num_words == 0)
        return NULL;

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int word_length, word_index = 0;
    char *start = str;

    for (; *str != '\0'; str++)
    {
        if (*str == ' ')
        {
            if (str > start)
            {
                word_length = str - start;
                words[word_index] = _strdup(start);
                if (words[word_index] == NULL)
                {
                    while (word_index > 0)
                        free(words[--word_index]);
                    free(words);
                    return NULL;
                }
                words[word_index][word_length] = '\0';
                word_index++;
            }
            start = str + 1;
        }
    }

    if (str > start)
    {
        word_length = str - start;
        words[word_index] = _strdup(start);
        if (words[word_index] == NULL)
        {
            while (word_index > 0)
                free(words[--word_index]);
            free(words);
            return NULL;
        }
        words[word_index][word_length] = '\0';
        word_index++;
    }

    words[word_index] = NULL;
    return words;
}

