#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Putchar - description
 * Return: fin du script
 */

int main(void)
{
	char alphab, e, q;

	e = 'e';
	q = 'q';

	for (alphab = 'a'; alphab <= 'z' ; alphab++)
	{
		if (alphab != e && alphab != q)
			putchar (alphab);
	}
	putchar ('\n');

	return (0);
}
