#include "main.h"
/**
 * _isupper - check uppercase
 * @c: char check
 * Return: 1 if c upper 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
