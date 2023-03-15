#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat 2 string with n
 * @s1: char1
 * @s2: char2
 * @n: n par rapport a s2
 * Return: NULL or *ar
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = 0, j = 0;
	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[k])
	{
		k++;
	}
	if (n < k)
	{
		k = n;
	}
	if (n > k)
	{
		n = k;
	}
	l = j + n;
	ar = malloc(sizeof(char) * (l + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		if (i < j)
			ar[i] = s1[i];
		else
			ar[i] = s2[i - j];
	}
	ar[i] = '\0';
	return (ar);
}
