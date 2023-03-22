#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: sep
 * @n: integer
 * Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *pptr;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		pptr = va_arg(ptr, char*);

		if (pptr != NULL)
		{
			printf("%s", pptr);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
