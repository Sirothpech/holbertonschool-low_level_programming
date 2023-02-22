#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - affiche le last digit
 * @n: char verif
 * Return: fin du script
 */

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
