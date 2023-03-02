#include "main.h"
/**
 * reverse_array - rev array
 * @a: check ptr
 * @n: check var
 */

void reverse_array(int *a, int n)
{
	int x, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		x = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = x;
	}
}
