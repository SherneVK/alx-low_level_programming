#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int e;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	e = 0;
	while (e < size)
	{
		array[e] = c;
		e++;
	}

	return (array);
}
