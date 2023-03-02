#include "main.h"
/**
 * _strncat - cat by bytes
 * @dest: check var
 * @src: check var
 * @n: byte value
 * Return: retourne dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
