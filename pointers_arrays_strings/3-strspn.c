#include "main.h"
/**
 * _strspn - longueur sous chaine
 * @s: chaine
 * @accept: chaine accept
 * Return: retourne valeur+n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0' && s[i] != accept[j])
			j++;

		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}