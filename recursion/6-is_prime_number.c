#include "main.h"

int check_prime(int n, int y);

/**
 * _is_prime_number - nombre premier
 * @n: check number
 * Return: ret funct
 */

int _is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check num prime
 * @n: number one
 * @y: number check
 * Return: 1 or 0
 */

int check_prime(int n, int y)
{
	if (n <= 1)
		return (0);
	if (n % y == 0 && y > 1)
		return (0);
	if ((n / 1) < y)
		return (1);
	return (check_prime(n, y + 1));
}
