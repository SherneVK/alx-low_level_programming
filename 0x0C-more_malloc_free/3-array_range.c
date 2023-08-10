#include "main.h"
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
	int *rrr;
	int size, e;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	rrr = malloc(sizeof(int) * size);

	if (rrr == NULL)
		return (NULL);

	for (e = 0; e < size; e++)
		rrr[e] = min++;

	return (rrr);
}
