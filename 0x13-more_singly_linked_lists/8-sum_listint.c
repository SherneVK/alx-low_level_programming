#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data in a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all data values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int som = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		som += curr->n;
		curr = curr->next;
	}

	return (som);
}
