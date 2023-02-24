#include "main.h"
/**
 * _isdigit - check digit
 * @c: check char
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
