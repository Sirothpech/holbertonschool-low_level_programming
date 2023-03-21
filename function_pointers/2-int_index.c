#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - array index
 * @array: array
 * @size: size array
 * @cmp: call funct
 * Return: index array if 0
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (((*cmp)(array[i])) == 1)
				return (i);

		}
	}
	return (-1);
}
