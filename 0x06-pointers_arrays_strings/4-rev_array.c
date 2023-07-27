#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements in the array.
 *
 * Return: Nothing (void).
 */
void reverse_array(int *a, int n)
{
	int abc, e, l;

	for (e = 0, l = n - 1; e < l; e++, l--)
	{
		abc = a[e];
		a[e] = a[l];
		a[l] = abc;
	}
}
