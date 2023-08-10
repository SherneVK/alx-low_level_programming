#include "main.c"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: A pointer to the newly created array,
 *         or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, *ptr;

    if (min > max)
        return (NULL);

    size = max - min + 1;

    arr = malloc(sizeof(int) * size);

    if (arr == NULL)
        return (NULL);

    ptr = arr;
    while (min <= max)
    {
        *ptr++ = min++;
    }

    return (arr);
}
