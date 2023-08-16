#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function to execute on each element.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t e;

		for (e = 0; e < size; e++)
		{
			action(array[e]);		
		}
	}
}
