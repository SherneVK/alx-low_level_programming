#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: Pointer to a pointer to the head of the linked list
 * @idx: Index where the new node should be added
 * @n: Integer value to be added to the new node
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_n, *curr;

	if (idx == 0)
		return (add_nodeint(head, n));

	curr = *head;
	for (i = 0; curr != NULL && 1 < idx - 1; i++)
		curr = curr->next;

	if (curr == NULL)
		return (NULL);

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = curr->next;
	curr->next = new_n;

	return (new_n);
}
