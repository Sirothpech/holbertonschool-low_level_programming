#include "lists.h"

/**
 * listint_len - funct that returns the number of elements in a linked list.
 * @h: pointer on the struct
 * Return: the number of nodes
 */

unsigned int listint_len(dlistint_t *h)
{
	unsigned i = 0;

	while (h != NULL)
	{

		h = h->next;
		i++;
	}
	return (i);
}

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the struct
 * @index: index of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL || index > listint_len(head))
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
