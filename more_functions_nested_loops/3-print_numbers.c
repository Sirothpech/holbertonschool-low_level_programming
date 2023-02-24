#include "main.h"
/**
 * print_numbers - affiche 0-9
 * _putchar - check char/num
 */
void print_numbers(void)
{
	char alphan;

	for (alphan = '0'; alphan <= '9'; alphan++)

		_putchar (alphan);

	_putchar ('\n');

}
