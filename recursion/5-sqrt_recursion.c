#include "main.h"

int _sqrt(int n, int y);
/**
 * _sqrt_recursion - calcul racine carre
 * @n: racine
 * Return: -1 si <0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - init y
 * @n: racine carre
 * @y: carre
 * Return: racine carre
 */

int _sqrt(int n, int y)
{
	int racine = y * y;

	if (racine > n)
		return (-1);
	if (racine == n)
		return (y);
	return (_sqrt(n, y + 1));
}
