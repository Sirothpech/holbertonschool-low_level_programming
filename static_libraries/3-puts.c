#include "main.h"
/**
 * _puts - affiche string
 * @str: check var
 */

void _puts(char *str)
{
	for (; *str != 0; str++)
		_putchar(*str);
	_putchar('\n');
}
