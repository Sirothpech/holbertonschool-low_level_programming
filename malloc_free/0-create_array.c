#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - cree un tableau de char
 * @size: size array
 * @c: char
 * Return: NULL or *ar
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
		return (ar);
}
