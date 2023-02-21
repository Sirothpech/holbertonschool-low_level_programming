#include "main.c"
/**
 * main - entry point
 * Putchar - description
 * Return: fin du script
 */

int main(void)
{
	int print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)

		_putchar (print_alphabet);

	_putchar ('\n');

	return (0);
}
