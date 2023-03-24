#include "variadic_functions.h"

/**
 * p_char - print characters
 * @arg: arguments comp
 */

void p_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * p_int - print integers
 * @arg: arguments comp
 */

void p_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * p_float - print floats
 * @arg: arguments comp
 */

void p_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * p_string - print string
 * @arg: arguments comp
 */

void p_string(va_list arg)
{
	char *arg_s = va_arg(arg, char*);

	if (arg_s == NULL)
	{
		printf("(nil)");
	}
	printf("%s", arg_s);
}

/**
 * print_all - print anything
 * @format: input
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator = "";
	va_list arg;

	pa array[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_string},
	};

	va_start(arg, format);

	j = 0;

	while (format[j])
	{
		i = 0;
		while (array[i].all)
		{
			if (array[i].all == format[j])
			{
				printf("%s", separator);
				array[i].f(arg);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(arg);
}
