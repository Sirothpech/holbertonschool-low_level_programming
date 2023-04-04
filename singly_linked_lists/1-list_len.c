#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer on the struct
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i++);
}
