#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the linked list.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
