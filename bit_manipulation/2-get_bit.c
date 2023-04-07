#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer
 * @index: index
 * Return: value of the bit or -1 if it failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
