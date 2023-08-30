#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *nxt;

	while (curr != NULL)
	{
		nxt = curr->nxt;
		free(curr);
		curr = nxt;
	}

	*head = NULL;
}
