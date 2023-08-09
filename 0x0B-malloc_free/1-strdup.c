#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The input string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;

	if (str == NULL)
		return NULL;
	while (str[length] != '\0')
        length++;

    duplicate = (char *)malloc((length + 1) * sizeof(char));
    if (duplicate == NULL)
        return NULL;

    for (unsigned int i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return duplicate;
}
