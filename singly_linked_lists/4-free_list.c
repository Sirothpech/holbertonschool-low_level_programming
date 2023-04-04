#include "lists.h"

/**
 * free_list - free the node
 * @head: pointer to the struct
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free(head->next);
	free(head->str);
	free(head);
}
