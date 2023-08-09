#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *array = (char *)malloc(size * sizeof(char));
    if (array == NULL)
        return NULL;

    unsigned int i = 0;
    while (i < size)
    {
        array[i] = c;
        i++;
    }

    return array;
}

