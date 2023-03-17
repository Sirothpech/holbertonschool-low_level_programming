#include "main.h"
#include <stdlib.h>
/**
 * array_range - range array
 * @min: min
 * @max: max
 *
 * Return: pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, j;

	if (max < min)
	{
		return (NULL);
	}
	j = abs(max - min) + 1;
	ar = malloc(j * sizeof(*ar));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ar[i] = min;
	}
	return (ar);
}
