#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check memory
 * @b: unsigned int
 * Return: NULL value 98
 */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);

	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
