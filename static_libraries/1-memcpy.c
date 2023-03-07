#include "main.h"
/**
 * _memcpy - copy memory to memory area
 * @dest: area dest
 * @src: memory pointed
 * @n: byte
 *Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
