#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a given comparison function.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function to be used.
 *
 * Return: Index of the first element for which the cmp function does not return 0,
 *         -1 if no element matches or if size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
		return (-1);

	int i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
