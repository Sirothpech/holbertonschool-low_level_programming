#include "main.h"
/**
 * print_alphabet_x10 - description
 * Return: fin du script
 */

void print_alphabet_x10(void)
{
	char alphab;
	int i = 0;

	while (i <= 9)
	{
		for (alphab = 'a'; alphab <= 'z'; alphab++)

		_putchar (alphab);

	_putchar ('\n');
	i++;
	}

}
