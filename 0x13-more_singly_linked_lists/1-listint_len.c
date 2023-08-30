#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t tel = 0;

	while (h != NULL)

	{
		tel++;
		h = h->next;
	}

	return (tel);
}
