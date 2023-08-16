#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function to be used.
 *
 * Return: 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int e;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (e = 0; e < size; e++)
	{
		if (cmp(array[e]))
			return (e);
	}
	return (-1);
}
