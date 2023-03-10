#include "main.h"

int check_prime(int n, int y);

/**
 * is_prime_number - nombre premier
 * @n: check number
 * Return: ret funct
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
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
	if (n % y == 0)
		return (1);
	if (n == y / 2)
		return (0);
	return (check_prime(n, y + 1));
}
