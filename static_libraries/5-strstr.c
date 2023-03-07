#include <stddef.h>
#include "main.h"
#include <stdio.h>
/**
 * _strstr - search string
 * @haystack: array1
 * @needle: array 2
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
