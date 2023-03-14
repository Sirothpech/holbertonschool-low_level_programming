#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - copy string new memory
 * @str: array string
 * Return: Null if fail
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	s = malloc(i * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
