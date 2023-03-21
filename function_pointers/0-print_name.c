#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name upper or not
 * @name: name check
 * @f: call funct
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	(*f)(name);
}
