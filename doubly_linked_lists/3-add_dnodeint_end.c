#include "lists.h"

/**
 * add_dnodeint_end - funct that adds a new node at the end of a list.
 * @head: pointer to struct
 * @n: integer
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end_node = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (end_node->next != NULL)
		end_node = end_node->next;
	new->prev = end_node;
	end_node->next = new;

	return (new);
}
