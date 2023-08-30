#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t
 * @h: Pointer to the head of the linked list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	do

	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	while (h != NULL);

	return (count);
}
