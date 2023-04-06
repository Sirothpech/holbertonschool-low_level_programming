#include "lists.h"

/**
 * insert_dnodeint_at_index - a func that inserts a new node at a given position
 * @h: pointer at the struct
 * @idx: index reference
 * @n integer
 * Return: new node or null if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	while (i < idx -1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;

	return (new);
}
