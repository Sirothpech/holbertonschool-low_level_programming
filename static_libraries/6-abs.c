#include "main.h"
#include <stdio.h>
/**
 * _abs - valeur absolue
 * @n: char verif
 * Return: fin du script
 */

int _abs(int n)
{
	if (n < 0)
	{
		int val_abs;

		val_abs = n * -1;
		return (val_abs);
	}
	return (n);
}
