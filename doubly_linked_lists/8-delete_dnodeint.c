#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of linked list.
 * @head: pointer at the struct node
 * @index: index reference
 * Return: 1 succeed -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	{
		dlistint_t *deleted = *head;
		unsigned int i = 0;

		if (*head == NULL)
			return (-1);

		if (index == 0)
			*head = deleted->next;

		while (i < index && deleted != NULL)
		{
			deleted = deleted->next;
			i++;
		}

		if (deleted == NULL)
			return (-1);

		if (deleted->next != NULL)
			deleted->next->prev = deleted->prev;

		if (deleted->prev != NULL)
			deleted->prev->next = deleted->next;

		free(deleted);
		return (1);
	}
}
