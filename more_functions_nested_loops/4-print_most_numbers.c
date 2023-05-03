#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	char alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		if (alpha != '2' && alpha != '4')
			_putchar(alphab);
	}
	_putchar('\n');
}
