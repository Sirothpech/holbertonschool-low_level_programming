#include "main.h"
/**
 * _print_rev_recursion - print reverse
 * @s: string check
 * Return: retourne 0 or NULL
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
