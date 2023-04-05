#include "lists.h"

/**
 * free_dlistint - free the node
 * @head: pointer to the struct
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);
}
