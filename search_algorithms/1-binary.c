#include "search_algos.h"

/**
 * binary_search - Binary search for a value in a sorted array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is found, or -1 if the value
 *         is not present or if the array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i, mid;

	if (array == NULL)
	{
		return (-1); /* array is NULL, return -1*/
	}

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
		{
			return (mid); /* value found, return the index*/
		}
		else if (array[mid] < value)
		{
			left = mid + 1; /* search the right half*/
		}
		else
		{
			right = mid - 1; /* search the left half*/
		}
	}

	return (-1); /* value not found, return -1*/
}
