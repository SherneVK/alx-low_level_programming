#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory,
 *         or NULL if nmemb or size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pr;
	unsigned int total_size;
	char *char_pr;
	unsigned int e;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	pr = malloc(total_size);

	if (pr == NULL)
		return (NULL);

	char_pr = (char *)pr;

	for (e = 0; e < total_size; e++)
		char_pr[e] = 0;

	return (pr);
}
