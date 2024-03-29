#include "lists.h"

/**
 * dlistint_len - funct that returns the number of elements in a linked list.
 * @h: pointer on the struct
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{

		h = h->next;
		i++;
	}
	return (i);
}
