#include "main.h"
/**
 * swap_int - echange les values
 * @a: check value
 * @b: check value
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
