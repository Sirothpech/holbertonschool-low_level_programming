#include "main.h"
/**
 * print_most_numbers - description
 * Return: fin du script
 */

void print_most_numbers(void)
{
	char alphab;

	for (alphab = '0'; alphab <= '9'; alphab++)
	{
		if (alphab != '2' && alphab != '4')

			_putchar (alphab);
	}

	_putchar ('\n');

}
