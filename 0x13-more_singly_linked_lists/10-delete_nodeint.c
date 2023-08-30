#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *curr;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	prev = *head;
	for (i = 0; i < index - 1 && prev != NULL; i++)
		prev = prev->next;

	if (prev == NULL || prev->next == NULL)
		return (-1);

	curr = prev->next;
	prev->next = curr->next;
	free(curr);

	return (1);
}
