#include "main.h"
/**
 * mul - multiples two integers
 * @a: char a
 * @b: char b
 * Return: result
 */

int mul(int a, int b)
{
	if ((a <= 0 || a >= 0) && (b <= 0 || b >= 0))
	{
		return (a * b);
	}
	return (0);
}
