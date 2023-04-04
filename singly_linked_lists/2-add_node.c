#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to struct
 * @str: string
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
