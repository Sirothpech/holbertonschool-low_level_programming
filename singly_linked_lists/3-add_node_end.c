#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to struct
 * @str: string
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *end_node = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (end_node->next != NULL)
		end_node = end_node->next;
	end_node->next = new;

	return (new);
}
